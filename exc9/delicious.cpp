#include <iostream>
using namespace std;

int *f(int *second_array_length_pointer, int first_array_length, int *array)
{
    *second_array_length_pointer = first_array_length * (first_array_length - 1) / 2;
    int *second_array = new int[*second_array_length_pointer];
    int counter = 0;
    for (int i = 0; i < first_array_length - 1; i++)

        for (int j = i + 1; j < first_array_length; j++)
            second_array[counter++] = array[i] + array[j];
    return second_array;
}

int main()
{
    int length, second_length;
    cin >> length;
    int *arr = new int[length];
    for (int i = 0; i < length; i++)
        cin >> arr[i];

    int *r= f(&second_length,length,arr);

    for (int i = 0; i < second_length; i++)
        cout << r[i] << " ";
    return 0;
}