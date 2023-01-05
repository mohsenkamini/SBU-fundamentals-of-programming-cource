#include <iostream>
#define max_book_name_length 2000
#define max_number_of_books 200
using namespace std;

struct book {
    char name[max_book_name_length];
    int price;
    const int initial_count = 10;
    int count = 10;
    bool is_sold = false;    
};

//void increment_array_size (book* &list,int current_size) {
//
//    book* temp = new book [current_size+1];
//    for (int i=0 ; i < current_size ; i++  ) {
//        temp[i].name=list[i].name;
//    }
//    delete[] list;
//    book* list = temp;
//    delete[] temp;
//    return ;
//}

void add_book (book list[], int &current_size,char book_name[], int price ) {
    
    //increment_array_size(list,current_size);
    for (int i=0 ; book_name[i]!='\0';i++)
        list[current_size].name[i]= book_name[i];
    list[current_size].price= price;
    current_size++;

}

void list_books (book list[] , int current_size) {
    for (int i=0 ; i < current_size ;i++ )
    {
        cout << "Name:" << list[i].name << " Price:" << list[i].price << " Count:" << list[i].count << endl;
    }
}

bool is_str1_equal_to_str2 (char* str1,char* str2) {
    int i;
    for (i=0 ; str1[i]!='\0'; i++)
    {
        if (str1[i]==str2[i])
            continue;
        else 
        {
            return false;
        }
    }
    if (str1[i]== '\0' && str2[i]=='\0')
        return true;
    
    return false;
        
}

void sell_book (book list[],int current_size ,char book_name[max_book_name_length] , int number_of_books,int & revenue) {
    
    for (int i=0 ; i<current_size ;i++ )
    {
        if (is_str1_equal_to_str2(list[i].name,book_name))
        {
            if (number_of_books >= list[i].count)
            {
                revenue+=(list[i].count*list[i].price);
                list[i].count=0;
                cout << "Book is sold"<<endl;
                list[i].is_sold=true;
                return;
            }
            else 
            {
                revenue+=(number_of_books*list[i].price);
                list[i].count-=number_of_books;
                return;
            }
        }
    }

}


void menu (book list[],int & revenue,int & current_size) {

    char input;
    cin >> input;
    char book_name[max_book_name_length];
    int price,number_of_books;

    switch (input) {

        case 'A':
            cin >> book_name >> price;
            add_book(list,current_size,book_name,price);
            menu(list,revenue,current_size);
            break;
        
        case 'L':
            list_books(list,current_size);
            menu(list,revenue,current_size);
            break;
        
        case 'S':
            cin >> book_name >> number_of_books;
            sell_book(list,current_size,book_name,number_of_books,revenue);
            menu(list,revenue,current_size);
            break;
        
        case 'P':
            cout << revenue << endl;
            menu(list,revenue,current_size);
            break;
        
        case 'E':
            break;
            

    }
}


int main () {

    book list[max_number_of_books];
    int current_size=0,revenue=0;

    menu(list,revenue,current_size);

}