#include <iostream>
#define max_number_of_names 21
#define max_name_length 100
using namespace std;

int length_of_word (char* word) {
    int i;
    for (i=0 ; word[i]!='\0';i++);

    return i;
}


void fill_the_list (char names[][max_name_length],char end_char) {

    int i=0;
    do {
        cin >> names[i];
        i++;
    }while (names[i-1][0] != end_char );

}

void swap_pointers (char* &x , char* &y) {
    char*temp=x;
    x=y;
    y=temp;
}




int main () {

    char names[max_number_of_names][max_name_length];

    fill_the_list(names,'0');

    cout << (int) *names[0]<< endl;
    cout << (int) *names[1];
}