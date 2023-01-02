#include <iostream>
#define max_name_length 2000
#define max_number_of_strings 2
using namespace std;

void fill_the_list (char words[][max_name_length]) {

    for (int i=0 ; i < max_number_of_strings-1 ; i++)
    {
        cin.getline(words[i],max_name_length);

    }

}

bool check_integrity (char words[][max_name_length]) {

    bool flag=true;
    for (int i=0 ; words[0][i]!= '\0' ; i++ ) {
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

    cout << sentences[1] ;

}