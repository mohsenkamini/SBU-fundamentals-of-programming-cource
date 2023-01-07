#include <iostream>
#define max_name_length 2003
#define max_number_of_strings 2
using namespace std;

int length_of_word (char* word) {
    int i;
    for (i=0 ; word[i]!='\0';i++);

    return i;
}

void fill_the_list (char words[][max_name_length]) {

    for (int i=0 ; i < max_number_of_strings-1 ; i++)
    {
        cin.getline(words[i],max_name_length);

    }

}

bool check_integrity (char words[][max_name_length]) {

    bool flag=true;
    for (int i=0 ; words[0][i]!= '\0' ; i++ ) {
        if (i > 2000)
        {
            flag=false;
            break;
        }
        if (words[0][i] == ' ')
        {
            //cout << "1\n";
            continue;
        }
        if (words[0][i] <'A')
        {
            //cout << "2\n";
            flag=false;
            break;
        }
        if (words[0][i] >'z')
        {
            //cout << "3" << words[0][i] << "    " << i << "\n";
            flag=false; 
            break;
        }
        if (words[0][i] >'Z' && words[0][i] <'a')
        {
            //cout << "4\n";
            flag=false;
            break;
        }
    }
    return flag;

}

int get_difference (char words[][max_name_length]) {

    int i;
    for (i=0 ; words[0][i]!= '\0' ; i++ );
    if (words[0][i-1] >= 'A' && words[0][i-1] <= 'Z' )
        return 'S' - words[0][i-1] ;
    
    return 's' - words[0][i-1] ;
    
}

void translate (char words[][max_name_length]) {
    
    int difference=get_difference(words);
    int temp=0,i;
    for (i=0 ; words[0][i]!= '\0' ; i++ ) {
        temp=words[0][i]+difference;
        if (temp >= 'A' && temp <= 'Z' )
            words[1][i]=temp;
        else
        {
            if (temp >= 'a' && temp <= 'z' )
                words[1][i]=temp;
            else 
            {   
                if (temp-difference == ' ')
                    words[1][i]=' ';
                else
                    words[1][i]=temp-26;
            }
        }
    }
    words[1][i]='\0';



}

bool is_same_letter_cap_and_small (char input, char check_char_small) {

    if (input == check_char_small || input == check_char_small - ('a' - 'A') )
        return true;
    
    return false;
}

bool check_new_strings_integrity (char words[][max_name_length]) {
    
    bool flag=true;

    char kratos[]={'k','r','a','t','o'};
    char atreus[]={'a','t','r','e','u'};

    bool check_kratos=true;
    bool check_atreus=true;

    for (int i=length_of_word(words[1])-2 , j=4 ; j >=0 ; j-- , i--) // -1 since we're not checking the 's'
    {
        //cout << "here words[1][i],kratos[j] : " << words[1][i] << "  " << kratos[j] << endl;

        if (is_same_letter_cap_and_small(words[1][i],kratos[j]) && check_kratos)
        {
        //    cout << "here words[1][i],kratos[j] : " << words[1][i] << "  " << kratos[j];
            check_atreus=false;
            check_kratos=true;
            continue;
        }
        else 
        {
            check_kratos=false;
        }

        if (is_same_letter_cap_and_small(words[1][i],atreus[j]) && check_atreus)
        {
            check_atreus=true;
            check_kratos=false;
            continue;
        }
        else 
        {
            if (!check_kratos)
            {
                flag=false;
                break;
            }
        }

    }
    return flag;

}

int main () {
    char sentences[max_number_of_strings][max_name_length];
    
    fill_the_list(sentences);
    //cout << check_integrity(sentences) << endl;
    switch (check_integrity(sentences)) {
        case 1:
            break;
        case 0:
            cout << "ERROR!";
            return 1;
    }
    translate(sentences);

    switch (check_new_strings_integrity(sentences)) {
        case 1:
            break;
        case 0:
            cout << "ERROR!";
            return 1;
    }

    cout << sentences[1] ;

}