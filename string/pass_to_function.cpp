#include <iostream>
using namespace std;

int length (char *s);

int main () {

    cout << length ("ali");

    char * s[100] = "ali";
    cout << length(s);
}