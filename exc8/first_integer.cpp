#include <iostream>
using namespace std;

void fill_the_array_with_cin (float array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

bool is_float_really_an_integer (float number) {

    int int_part=number;
    if (int_part == number)
        return true;
    return false;
}

float find_first_integer (float array[],int size) {

	for (int i =0 ; i < size ; i++)
    {
        if (is_float_really_an_integer(array[i]))
            return i;
    }
    return -1;

}

int main () {

    int n;
    float array[100];
    cin >> n;

    fill_the_array_with_cin(array,n);
    cout << find_first_integer(array,n);

}