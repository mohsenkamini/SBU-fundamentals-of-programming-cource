
void swap (int * a, int* b) {
    int temp= *a;
    *a = *b;
    *b = tem
}

int main () {

    int a=1,b=2;
    swap (&a,&b);
}