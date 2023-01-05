#include <iostream>
using namespace std;

// the == operand is not valid for comparing two variables like initialized_var1 and initialized_var2
// which have been created by struct
struct book 
{
    char* name;
    char* author_name;
    int publication_year;
    double price;
};

struct something_else
{
    char* name;
    char* author_name;
    int publication_year;
    double price;
} initialized_var1 , initialized_var2 ;

int main () {
    book b;
    b.name= "shahname";
    b.author_name= "ferdowsi";
    b.publication_year = "1390";
    b.price = "21.5"


    book* book_ptr;
    book_ptr = new book;
    book_ptr -> name = "bostan";        // *(book_ptr).name

    delete book_ptr;

    book books[] = {{"Golestan", "saadi" } , {"Bostan" , "saadi"}};
}