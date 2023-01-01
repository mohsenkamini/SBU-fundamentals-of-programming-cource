#include <iostream>
#define max_string_length 101
using namespace std;

void print_the_array (char array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cout << array[i] << " ";
    cout << endl;
}

int length_of_word (char* word) {
    int i;
    for (i=0 ; word[i]!='\0';i++);

    return i;
}

int index_of_null (char* words,int size) {
    for (int i =0 ; i < size ; i++)
        if (words[i]=='\0')
            return i;
}

int index_of_last_space (char* words,int null_index ) {
    for (int i = null_index-1; i >= 0 ; i--)
        if (words[i]==' ')
            return i;
        
    return -1;
}

void reversed_words (char* words,int null_index,char* new_string,int starting_index_on_new_string) {
    if ( null_index==0 )
        return ;
    
    bool flag=false;

    if (index_of_last_space(words,null_index) == -1)
        flag=true;

    for (int i = index_of_last_space(words,null_index)+1 ; i < null_index ; i++ , starting_index_on_new_string++)
        new_string[starting_index_on_new_string]=words[i];

    //cout << null_index << endl << flag << endl;

    if (!flag)
    {
        new_string[starting_index_on_new_string]=' ';
        starting_index_on_new_string++;
        //cout << "1. " << endl;
        //print_the_array(new_string,max_string_length);
        //cout << "\n1. " << endl;
        reversed_words(words,index_of_last_space(words,null_index),new_string,starting_index_on_new_string);
    }
    else
    {
        new_string[starting_index_on_new_string]='\0';
        //cout << "2. " << endl;
        //print_the_array(new_string,max_string_length);
        //cout << "\n2. " << endl;
        return;
    }
    

}


int main () {

    char words[max_string_length];
    cin.getline (words,max_string_length);
    char new_string[max_string_length];
    reversed_words(words,index_of_null(words,max_string_length),new_string,0);

    cout << new_string;
}
