#include <iostream>
using namespace std;

void fill_the_array_with_cin (int array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

void print_the_array (int array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cout << array[i] << " ";
    cout << endl;
}

void shark_eating_process (int *sharks,int size) {
    
    sharks[1]+=sharks[0];
//    sharks+=1;
//    size--;

}

void swap (int& var1,int& var2) {

    int temp;
    temp=var1;
    var1=var2;
    var2=temp;
}


void bubble_sort (int array[], int size) {

    if (size == 0)
        return;
    for (int i =0 ; i < size-1 ; i++)
    {
        if ( array[i] > array[i+1]  )
        {
            swap(array[i],array[i+1]);
        }
    }
    bubble_sort(array,size-1);
}



int main () {

    int size;
    cin >> size;
    int *sharks= new int [size];

    fill_the_array_with_cin(sharks,size);
    while (size)
    {
        shark_eating_process(sharks,size);
        sharks+=1;
        size--;
        bubble_sort(sharks,size);
        print_the_array(sharks,size);
    }
}