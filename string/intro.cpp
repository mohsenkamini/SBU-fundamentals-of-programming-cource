#include <iostream>
using namespace std;
int main () {
// strings are char arrays ending in '\0' or NULL or 0
// the 0 should be at the end of the string not the array
char name []={'A','l','i','\0'};
char name1 []={'A','l','i',NULL};
char name2 []={'A','l','i',0};

// or
char name3 [] = "Ali";
char* name_pointer = new char [10]; 
                            // char array/pointer is a datatype and is a bit different
                            // e.g we can cin a char pointer like below
cin >> name_pointer;
cout << name_pointer;

    // strings are stored in data-segment (a part from memory that will be busy from the start to the end of runtime)

}