#include <iostream>
using namespace std;

int * random_array (int size) {
    int *p = new int[size];
    for (int i=0 ; i< size; i++)
        p[i]=rand();
    
    return p;
}

int main () {

    int size;
    cin >> size;
    int *random=random_array(size);
    cout << random[0];
    delete random;
}