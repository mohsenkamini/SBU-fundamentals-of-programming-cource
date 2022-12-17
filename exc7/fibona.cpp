#include <iostream>
using namespace std;

int fibo (int n) 
{
    if (n==0 || n==1)
        return 1;
    
    return fibo(n-1) + fibo(n-2);
}

int find_the_nearest_fibo_index (int input) {

    //cout << "input " << input << endl;
    for (int i= 1 ; i <= input ; i++ )
    {
        //cout << i <<" . I'm in " << endl;
        if ( fibo(i) == input )
            return i;
        if ( fibo(i) > input )
            return i-1;
    }
}

int return_indexes (int input)
{
    if (input == 1 )
    {
        cout << "1" << endl;
        //cout << fibo(1);
        return 1;
    }
    if (fibo(find_the_nearest_fibo_index(input)) == input)
    {
        //cout << "2.. I'm in " << endl;
        cout << find_the_nearest_fibo_index(input) << endl;
        //cout << fibo(find_the_nearest_fibo_index(input)) << endl;
        return find_the_nearest_fibo_index(input);
    }
    cout << find_the_nearest_fibo_index(input) << endl;
    //cout << fibo(find_the_nearest_fibo_index(input)) << endl;
    return return_indexes(input-fibo(find_the_nearest_fibo_index(input)));
        
}

int counter_for_return_indexes (int input,int& count)
{
    count++;
    if (input == 1 )
    {
        //cout << "1" << endl;
        //cout << fibo(1);
        return 1;
    }
    if (fibo(find_the_nearest_fibo_index(input)) == input)
    {
        //cout << "2.. I'm in " << endl;
        //cout << find_the_nearest_fibo_index(input) << endl;
        //cout << fibo(find_the_nearest_fibo_index(input)) << endl;
        return find_the_nearest_fibo_index(input);
    }
    //cout << find_the_nearest_fibo_index(input) << endl;
    //cout << fibo(find_the_nearest_fibo_index(input)) << endl;
    return counter_for_return_indexes(input-fibo(find_the_nearest_fibo_index(input)),count);
        
}


int main () {

    int input,number_of_outputs=0;
    cin >> input;

    counter_for_return_indexes(input,number_of_outputs);
    cout << number_of_outputs << endl;
    //cout << fibo(find_the_nearest_fibo_index(input));
    return_indexes(input);

}
