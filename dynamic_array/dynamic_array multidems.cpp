#include <iostream>
using namespace std;

int*** create_3D_dynamic_array(int i_size,int j_size,int z_size) {
    
    int*** pointer2pointer2pointer;
    pointer2pointer2pointer = new int** [i_size];
    for (int i=0 ; i < i_size ; i++)
        {
            pointer2pointer2pointer[i] = new int* [j_size];
            for (int j=0 ; j < j_size ; j++)
                pointer2pointer2pointer[i][j] = new int [z_size];

        }
    return pointer2pointer2pointer;
}


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
