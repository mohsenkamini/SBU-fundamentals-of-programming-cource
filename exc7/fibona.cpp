#include <iostream>
using namespace std;

int fibo (int n) 
{
    if (n==0 || n==1)
        return 1;
    
    return fibo(n-1) + fibo(n-2);
}

int find_the_nearest_fibo_index (int input) {

    for (int i= 2 ; i <= input ; i++ )
    {
        if ( fibo(i) > input )
            return i-1;
    }
}



int main () {

    int input,number_of_outputs;
    cin >> input;


}
