#include <iostream>
using namespace std;

int main () {
    int size;
    cin >> size;
    int** pointer;
    pointer = new int* [size];

    for (int i=0 ; i < 5 ; i++)         // created a size*5 2D array
        pointer[i]=new int [4];

    cout << pointer[0][0] ; // the pointer to pointer can be a 2D array
                            // the pointer is an array of pointers

    for (int i=0 ; i<5 ; i++)
        delete pointer[i]; // free the memory
    delete pointer;



    int* p = new int; 
    delete p;
}
