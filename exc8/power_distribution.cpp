#include <iostream>
#define default_array_size 100
using namespace std;

void fill_the_array_with_cin (int array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

void print_the_array (int array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cout << array[i] << "   ";
    cout << endl;
}

void write_zero_to_every_member (int array[],int size) {
	for (int i =0 ; i < size ; i++)
        array[i]=0;
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

void find_and_write_differences (int read_array[],int size, int write_array[],int m) {

    for (int i=size-1 ; i-m+1 >=0 ; i--)
    {
        write_array[size-1-i]=read_array[i]-read_array[i-m+1];
    }

}

int main () {

    int n,m;
    cin >> n >> m ;
    int powers[default_array_size],differences[default_array_size];

    fill_the_array_with_cin(powers,n);
    write_zero_to_every_member(differences,n-m+1);  // the number of all difference we're going to calculate
                                                    // equals n-m+1. at the end we'll sort by this size
                                                    // and the 0 member of that sorted array is the answer.

    bubble_sort(powers,n);
    find_and_write_differences(powers,n,differences,m);
    //print_the_array(differences,n);
    bubble_sort(differences,n-m+1);

    //print_the_array(differences,n);
    cout << "Lowest difference between max and min power is: "<<differences[0];

}

