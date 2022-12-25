#include <iostream>
#define max_square_length 5
#define max_passage_length 8 // max number of R & D s
#define max_number_of_passages 70 // this is combination(8,4) since the max square is 5*5
using namespace std;

void write_zero_to_every_member (int array[],int size) {
	for (int i =0 ; i < size ; i++)
        array[i]=0;
}

void fill_the_2D_array_with_char_0 (char array[][max_passage_length],int i_size,int j_size) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        array[i][j]='0';
        }
}


void fill_the_2D_array_with_int_0 (int array[][max_square_length+1],int i_size,int j_size) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        array[i][j]=0;
        }
}

char what_is_available_next(int square[][max_square_length+1],int i , int j) {

    if ( square[i+1][j] != 0 && square[i][j+1] != 0)
        return='b';             // both
    if ( square[i+1][j] != 0)
        return 'd';             // only down
    if ( square[i][j+1] != 0)
        return 'r';             // only right
    if ( square[i+1][j] == 0 && square[i][j+1] == 0)
        return 'n';             // none
}


void what_passage_is_available(int square[][max_square_length+1],char passages[][max_passage_length],int square_length,int i_passages,int j_passages) {

    int passage_count=0;
    if (passages)
    for (int i =0 ; i < square_length ; i++)
        {
            for (int j=0 ; j < square_length ; j++)
		        {
                    switch (what_is_available_next(square,i,j)){

                        case 'b':
                            
                    }
                }
        }    

}

int main () {

    char passages[max_number_of_passages][max_passage_length];
    int costs[max_number_of_passages];
    int square[max_square_length+1][max_square_length+1];

    write_zero_to_every_member(costs,max_number_of_passages);
    fill_the_2D_array_with_char_0(passages,max_number_of_passages,max_passage_length);
    fill_the_2D_array_with_int_0(square,max_square_length+1,max_square_length+1);

    int square_length;
    cin >> square_length;
    int passages_length=(square_length-1)*2;





}
