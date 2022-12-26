#include <iostream>
using namespace std;

void message__parking_already_full () {
    cout << "Already Full\n";
}

void message__parking_already_empty () {
    cout << "Already Empty\n";
}

void message__parking_full () {
    cout << "Parking Lot Got Full\n";
}

void message__parking_empty () {
    cout << "Parking Lot Got Empty\n";
}

void beauty () {
    cout << "======================\n";
}

int*** create_3D_dynamic_array(int i_size,int j_size,int z_size) {
    
    int*** pointer2pointer2pointer;
    pointer2pointer2pointer = new int** [i_size];
    for (int i=0 ; i < i_size ; i++)
        {
            pointer2pointer2pointer[i] = new int* [j_size];
            for (int j=0 ; j < j_size ; j++)
                pointer2pointer2pointer[i][j] = new int [z_size];

        }
    return pointer2pointer2pointer;
}

void write_zero_to_every_member_3D (int*** pointer2pointer2pointer,int i_size,int j_size,int z_size) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        {
                    for (int z=0 ; z < z_size ; z++)
                        pointer2pointer2pointer[i][j][z]=0;
                }
        }
}

void print_3D_array (int*** pointer2pointer2pointer,int i_size,int j_size,int z_size) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            cout << "Floor " << i << ":\n";
            for (int j=0 ; j < j_size ; j++)
		        {
                    for (int z=0 ; z < z_size ; z++)
                        cout << pointer2pointer2pointer[i][j][z] << " ";
                cout << endl;
                }
        }
}

char check_parking_status (int*** parking,int i, int j, int z) {
    if (parking[i][j][z] == 0)
        return 'e';
    if (parking[i][j][z] == 1)
        return 'f';
    else
        return 'u'; //undefined
}

void fill_parking (int*** parking,int i, int j, int z) {parking[i][j][z]=1;}
void empty_parking (int*** parking,int i, int j, int z) {parking[i][j][z]=0;}

int traverse_3D_and_count_for_number (int*** pointer2pointer2pointer,int i_size,int j_size,int z_size , int number) 
{
    int counter=0;
    for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        {
                    for (int z=0 ; z < z_size ; z++)
                    {
                        if (pointer2pointer2pointer[i][j][z]==number)
                            counter++;
                    }
                }
        }
    return counter;
}

void delete_3D_dynamic_array (int*** pointer2pointer2pointer,int i_size,int j_size,int z_size) {

    for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size ; j++)
		        {
                    delete pointer2pointer2pointer[i][j];
                }
            delete [] pointer2pointer2pointer[i];
        }
}

void exit () {
    cout << "Exited!";
}





///////
//MENU/
///////

void menu (int *** parking,int number_of_floors,int number_of_rows,int number_of_columns) {
    char command;
    cin >> command;
    int i,j,z;
    switch (command) {
        
        case 'i':
            cin >> i >> j  >> z;
            switch(check_parking_status(parking,i,j,z)) {
                case 'f':
                    message__parking_already_full();
                    beauty();
                    menu(parking,number_of_floors,number_of_rows,number_of_columns);
                    break;
                case 'e':
                    fill_parking(parking,i,j,z);
                    message__parking_full();
                    beauty();
                    menu(parking,number_of_floors,number_of_rows,number_of_columns);
                    break;
                case 'u':       // this is only for my own tests
                    cout << "something went wrong...";
                    break;;
            }
            break;

        case 'o':
            cin >> i >> j  >> z;
            switch(check_parking_status(parking,i,j,z)) {
                case 'e':
                    message__parking_already_empty();
                    beauty();
                    menu(parking,number_of_floors,number_of_rows,number_of_columns);
                    break;
                case 'f':
                    empty_parking(parking,i,j,z);
                    message__parking_empty();
                    beauty();
                    menu(parking,number_of_floors,number_of_rows,number_of_columns);
                    break;
                case 'u':       // this is only for my own tests
                    cout << "something went wrong...";
                    break;;
            }
            break;

        case 'c':
            cout << "Free Parking Lots: " << traverse_3D_and_count_for_number(parking,number_of_floors,number_of_rows,number_of_columns,0) << endl;
            beauty();
            menu(parking,number_of_floors,number_of_rows,number_of_columns);
            break;

        case 'p':
            print_3D_array(parking,number_of_floors,number_of_rows,number_of_columns);
            beauty();
            menu(parking,number_of_floors,number_of_rows,number_of_columns);
            break;

        case 'e':
            delete_3D_dynamic_array(parking,number_of_floors,number_of_rows,number_of_columns);
            exit();
            break;
    }
}

int main () {

    int number_of_floors,number_of_rows,number_of_columns;
    cin >> number_of_floors >> number_of_rows >> number_of_columns;

    int ***parking = create_3D_dynamic_array(number_of_floors,number_of_rows,number_of_columns);
    write_zero_to_every_member_3D(parking,number_of_floors,number_of_rows,number_of_columns);
    //print_3D_array(parking,number_of_floors,number_of_rows,number_of_columns);
    menu(parking,number_of_floors,number_of_rows,number_of_columns);


}