#include <iostream>
#define default_array_size 100
#define default_j_size 2
using namespace std;

void fill_the_array_with_cin (int array[],int n) 
{
	for (int i =0 ; i < n ; i++)
		cin >> array[i];
}

void write_zero_to_every_member (int array[],int size) {
	for (int i =0 ; i < size ; i++)
        array[i]=0;
}

void fill_the_2D_array_with_cin (int array[][default_j_size],int i_size,int j_size) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        cin >> array[i][j];
        }
}

void find_the_worth_based_on_weight (int array[][default_j_size],int i_size,int weight_limit,int available_worths[]) {

    int a=0;
    for (int i =0 ; i < i_size ; i++)
        {
            if (array[i][default_j_size-1] <= weight_limit)
            {
                available_worths[a]=array[i][default_j_size-2];
                a++;
            }
        }
}

void print_the_array (int array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cout << array[i] << "   ";
    cout << endl;
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

    int number_of_goods,weight_limit;
    int worth_weight[default_array_size][default_j_size],available_worths[default_array_size];

    cin >> number_of_goods >> weight_limit;

    fill_the_2D_array_with_cin(worth_weight,number_of_goods,2);
    write_zero_to_every_member(available_worths,default_array_size);
    find_the_worth_based_on_weight(worth_weight,number_of_goods,weight_limit,available_worths);
    bubble_sort(available_worths,default_array_size);
    //print_the_array(available_worths,default_array_size);
    
    cout << available_worths[default_array_size-1];
    return 0;
}


