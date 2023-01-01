#include <iostream>
using namespace std;

int main () {

//    int r=2;
//    int *z;
//    z = &r;
//    cout << *z << "\n ehem"<<z ;        // *z is the value r is storing.
                                        // z is the address of r
    int a[] = {7, 8, 9, 10, 13};
    //int *p=a;
    cout << sizeof(*a) << "\n" << a+1 << "\n"  << a[0] << ", " << a[1] << ", " << a[2] << ", " << a[3] << ", " << a[4] << '\n';

}
