#include <iostream>
using namespace std;

void fill_the_array_with_cin (char array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

int count_mistakes (char array[], int size, char wicked_char) {

    int count=0;
	for (int i =0 ; i < size ; i++)
    {
        if (array[i] == wicked_char)
            count++;
    }
    return count;
}

void swap (int& var1,int& var2) {

    int temp;
    temp=var1;
    var1=var2;
    var2=temp;
}

void parallel_bubble_sort (int count_array[],char wicked_chars_array[], int size) {

    if (size == 0)
        return;
    cout << count_array[0] << "  "  << count_array[1] << "  "  << count_array[2] << "  " << count_array[3];
    cout << endl;
    for (int i =0 ; i < size ; i++)
    {
        if ( count_array[i] > count_array[i+1]  )
        {
    //        for (int m=0 ; j < size ; m++)
    //            cout << count_array[m] << "   " ;
    //        cout << endl;
            swap(count_array[i],count_array[i+1]);
            swap(wicked_chars_array[i],wicked_chars_array[i+1]);
        }
    }
    parallel_bubble_sort(count_array,wicked_chars_array,size-1);
}




int main () {

    char text[551];
    int size;
    int count_array[4];
    char wicked_chars_array[4];

    cin >> size;
    fill_the_array_with_cin(text,size);
    fill_the_array_with_cin(wicked_chars_array,4);

    for (int i=0 ; i < 4 ; i++)
    {
        count_array[i] = count_mistakes(text,size,wicked_chars_array[i]);
    }
    for (int i =0 ; i <4 ; i++)
    {
        cout << wicked_chars_array[i] << ": " << count_array[i] << endl;
    }

    parallel_bubble_sort(count_array,wicked_chars_array,4);

    for (int i =0 ; i <4 ; i++)
    {
        cout << wicked_chars_array[i] << ": " << count_array[i] << endl;
    }

    return 0;
}