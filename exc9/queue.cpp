#include <iostream>
using namespace std;

void load_arr1_to_arr2 (char* arr1, int n,char* &arr2) {
    for (int i=0 ; i < n ; i++)
        arr2[i]=arr1[i];
}



void enqueue(char* &queue, int &n, char data) {

    char* temp = new char [n];
    load_arr1_to_arr2(queue,n,temp);
    delete queue;
    queue = new char [n+1];
    load_arr1_to_arr2(temp,n,queue);
    queue[n]=data;
    n++;
    delete temp;

}

char dequeue(char* &queue, int &n) {
    if (n==0)
    {
        //cout << "empty";
        return '0';
    }

    char result=queue[0];
    char* temp = new char [n];
    load_arr1_to_arr2(queue+1,n-1,temp);
    delete queue;
    n--;
    queue = new char [n];
    load_arr1_to_arr2(temp,n,queue);
    delete temp;
    return result;


}
void print_queue(char* queue, int n){

    for (int i=0 ; i < n ; i++)
        cout << queue[i] << " ";
    cout << endl;
}

void menu (char* &queue, int &size) {
    char input_command,input_char,dequeue_output;
    cin >> input_command;
    switch (input_command) {

        case 'E':
            cin >> input_char;
            enqueue(queue,size,input_char);
            menu(queue,size);
            break;
        case 'D':
            switch (dequeue_output = dequeue(queue,size)) {
                case '0':
                    cout << "empty" <<endl ;
                    break;
                default:
                    cout << dequeue_output << endl; 
            }
            menu(queue,size);
            break;
        case 'S':
            cout << size << endl;
            menu(queue,size);
            break;
        case 'P':
            if (size == 0)
                cout << "empty"<<endl;
            else
            {
                print_queue(queue,size);
            }
            menu(queue,size);
            break;
        case 'F':
            break;
    }
}


int main () {

    char* queue;
    int size=0;

    queue = new char [size];
    
    menu(queue,size);

    




}
