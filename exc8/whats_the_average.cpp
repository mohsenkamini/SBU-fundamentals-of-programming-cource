#include <iostream>
#include <iomanip>  // std::setprecision
#define n 30
#define m 15
using namespace std;

void fill_the_array_with_cin (int array[],int size) 
{
    //cout << "I'm in 1 \n";
	for (int i =0 ; i < size ; i++)
		cin >> array[i];
}

void fill_the_2D_array_with_cin (float array[][m],int i_size,int j_size[]) 
{
    //cout << "I'm in 2 \n";
	for (int i =0 ; i < i_size ; i++)
        {
            //cout << "\n j_size[i]"  <<j_size[i] << endl;
            for (int j=0 ; j < j_size[i] ; j++)
		        cin >> array[i][j];
        }
}

void print_the_2D_array (float array[][m],int i_size,int j_size[]) 
{
	for (int i =0 ; i < i_size ; i++)
        {
            for (int j=0 ; j < j_size[i] ; j++)
		        cout << array[i][j] << " ";
            cout << endl;
        }
}

float max (float array[][m],int i, int j_size) {

    float result=0.0;
        for (int j=0 ; j < j_size ; j++)
		{    
            if (array[i][j] > result)
                result=array[i][j];
        }
    return result;
}

float sum (float array[][m],int i, int j_size) {

    float result=0.0;
        for (int j=0 ; j < j_size ; j++)
		{    
            result+=array[i][j];
        }

    return result;
}

float average (float sum, int size) {
    return sum/size;
}

void return_final_result (float array[][m],int i_size, int j_size[]) {

    for (int i =0 ; i < i_size ; i++)
        {
            cout << fixed << setprecision(3);
            cout << "Max" << i+1 << ": "  << max(array,i,j_size[i]) << endl;
            cout << "Sum" << i+1 << ": "  << sum(array,i,j_size[i]) << endl;
            cout << "Average" << i+1 << ": "  << average(sum(array,i,j_size[i]),j_size[i]) << endl;

            if (i+1 < i_size)
                cout << endl;
        }
}


int main () {

    int number_of_students;
    int number_of_grades[n];
    float grades[n][m];

    cin >> number_of_students;

    fill_the_array_with_cin (number_of_grades,number_of_students);
    fill_the_2D_array_with_cin (grades,number_of_students,number_of_grades);

//    print_the_2D_array (grades,number_of_students,number_of_grades);
    return_final_result(grades,number_of_students,number_of_grades);
    return 0;   
}