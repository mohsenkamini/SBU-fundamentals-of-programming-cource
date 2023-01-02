#include <iostream>
#define max_number_of_words 2
#define max_name_length 101
using namespace std;

int length_of_word (char* word) {
    int i;
    for (i=0 ; word[i]!='\0';i++);

    return i;
}

void fill_the_list (char words[][max_name_length]) {

    for (int i=0 ; i < max_number_of_words ; i++)
    {
        cin >> words[i];

    }

}

bool contain_same_letters (char words[][max_name_length],int size) {

    bool flag;
    for (int i=0 ; i < size ; i++)
    {
        flag=false;
        for (int j=0 ; j < size ; j++)
        {
            if (words[0][i] == words[1][j])
            {
                flag=true;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    return flag;
}

int main () {

    char words[max_number_of_words][max_name_length];
    fill_the_list(words);

    if (length_of_word(words[0]) != length_of_word(words[1]))
    {
        cout << "No";
        return 1;
    }

    switch (contain_same_letters(words,length_of_word(words[0]))) {
        case 1:
            cout << "Yes";
            break;
        case 0:
            cout << "No";
            break;
    }
}