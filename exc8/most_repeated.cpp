#include <iostream>
using namespace std;

void fill_the_array_with_cin (char array[],int size) 
{
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

void write_zero_to_every_member (int array[],int size) {
	for (int i =0 ; i < size ; i++)
        array[i]=0;
}

int translate_letter_to_index (char letter) {   /* The repeats array starts from 0 to 25. 
                                                    e.g repeats[0] refers to number of repeats
                                                    for letter a. and repeats[1] refers to b ... 
                                                */
    return letter - 'a';
}

void save_repeats (char input_grades[],int grades_size,int repeats[],int repeats_size) {
	for (int i =0 ; i < grades_size ; i++)
    {
        repeats[translate_letter_to_index(input_grades[i])]++;   
    }
}

int crawl_for_number (int array[],int size, int input_number) {
	for (int i =0 ; i < size ; i++)
        {
            if (array[i] == input_number)
                return i;
        }
}

char translate_index_to_letter (int i) {
    return i + 'a';
}


int main () {

    int repeats[26]; // the english alphabet is consisted of 26 letters
    char input_grades[100];

    int size,number_of_repeats;
    
    cin >> size ;
    fill_the_array_with_cin(input_grades,size);
    write_zero_to_every_member(repeats,26);

    save_repeats(input_grades,size,repeats,26);

    cin >> number_of_repeats ;
    cout << translate_index_to_letter(crawl_for_number(repeats,26,number_of_repeats));
}