#include <iostream>
#define max_number_of_names 21
#define max_name_length 100
using namespace std;

void print_the_array_of_strings (char array[][max_name_length],int size) 
{
	for (int i =0 ; i < size ; i++)
		cout << array[i] << "\n";
    cout << endl;
}

int min (int num1,int num2) {
    if (num1 < num2)
        return num1;
    return num2;
}

int length_of_word (char* word) {
    int i;
    for (i=0 ; word[i]!='\0';i++);

    return i;
}


int fill_the_list (char names[][max_name_length],char end_char) {

    int i=0;
    do {
        cin >> names[i];
        i++;
    }while (names[i-1][0] != end_char );
    return i-1; // as it is needed for counting.

}

void swap_pointers (char x[] , char y[]) {
    char* temp[1];
    temp [1] = x;
    x=y;
    y=temp[1];
}

int compare_strings (char* str1,char* str2) {

// return 1 represenets that str1 should be higher than str2
// return -1 represenets that str1 should be lower than str2
// return 0 represents that the two strings are equal

    int len1=length_of_word(str1);
    int len2=length_of_word(str2);
    int A_a_difference= 'A' - 'a';
    for (int i=0 ; i < min (len1,len2); i++) {

        if ( str1[i] < str2[i]) {
            if (str1[i]>= 'A' && str1[i] <='Z' && str2[i]>= 'a' && str2[i] <='z' ) {
                if (str1[i] - str2[i] <= A_a_difference ) 
                    return 1;
                return -1;
            }
            
            return 1;    
        }

        if ( str1[i] > str2[i]) {
            if (str2[i]>= 'A' && str2[i] <='Z' && str1[i]>= 'a' && str1[i] <='z' ) {
                if (str2[i] - str1[i] <= A_a_difference) 
                    return -1;
                return 1;
            }
            
            return -1;    
        }



    }

    // if we're here it means that until min(len1,len2)
    // we're all equal.
    if (len1 > len2)
        return -1;
    if (len1 < len2)
        return 1;

    return 0;
    

}

void bubble_sort (char array[][max_name_length], int size) {

    if (size == 0)
        return;
    for (int i =0 ; i < size-1 ; i++)
    {
        if ( compare_strings(array[i],array[i+1]) == -1  )
        {
            swap_pointers(array[i],array[i+1]);
        }
    }
    bubble_sort(array,size-1);
}


int main () {

    char names[max_number_of_names][max_name_length];

    int size=fill_the_list(names,'0');

    //cout << (int) *names[0]<< endl;
    //cout << (int) *names[1] << endl;

    //cout << compare_strings(names[0],names[1]);
    bubble_sort(names,size);

    print_the_array_of_strings(names,size);

}