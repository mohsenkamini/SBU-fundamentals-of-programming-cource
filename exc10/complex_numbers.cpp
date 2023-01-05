#include <iostream>
using namespace std;
#define max_number_length 200

struct complex 
{
     int re;
     int img;
};

complex cin_input () {
    complex result;
    result.re=0;
    result.img=0;
    char input[max_number_length],real[max_number_length],imaginary[max_number_length];
    bool neg_re=false,neg_im=false;
    cin >> input;
    int i,j,powered_10;

    if (input[0] == '-')
    {
        neg_re=true;
        for (i=1 ; input[i]!='+' && input[i]!='-' ; i++)
        {
            real[i-1]=input[i];
        }    
        real[i-1]='\0';

        for (int m=i-2,powered_10=1 ; m >= 0 ; m--, powered_10*=10)
        {
            result.re+= ((int) (real[m] - '0'))*powered_10;
        }
    }
    else
    {
        for (i=0 ; input[i]!='+' && input[i]!='-' ; i++)
        {
            real[i]=input[i];
        }
        real[i]='\0';

        for (int m=i-1,powered_10=1 ; m >= 0 ; m--, powered_10*=10)
        {
            result.re+= ((int) (real[m] - '0'))*powered_10;
        }
    }

    if (input[i] == '-')
        neg_im=true;
    
    for (i+=3, j=0 ; input[i]!='\0'; j++,i++)
    {
        imaginary[j]=input[i];
    }    
    imaginary[j]='\0';

    
    for (j-=1,powered_10=1 ; j >= 0 ; j--, powered_10*=10)
    {
        result.img+= ((int) (imaginary[j] - '0'))*powered_10;
    }

    switch(neg_re) {
        case 1:
            result.re*=-1;
            break;
    }
    switch(neg_im) {
        case 1:
            result.img*=-1;
            break;
    }
    return result;
}

complex sum(complex num1,complex num2) {
    complex result;
    result.re=num1.re+num2.re;
    result.img=num1.img+num2.img;
    return result;
}

complex subtract(complex num1,complex num2) {
    complex result;
    result.re=num1.re-num2.re;
    result.img=num1.img-num2.img;
    return result;
}

complex product(complex num1,complex num2) {
    complex result;
    result.re=(num1.re*num2.re) - (num1.img*num2.img) ;
    result.img=(num1.re*num2.img) + (num2.re*num1.img);
    return result;
}

void output (complex number) {

    if (!number.re && !number.img) 
    {
        cout << "0";
        return;
    }
    if (!number.re)
    {
        cout << number.img << "i";
        return;
    }
    if (!number.img)
    {
        cout << number.re ;
        return;
    }
    if (number.img > 0)
    {
        cout << number.re << "+" << number.img << "i";
        return;
    }
    cout << number.re << number.img << "i";
    
}


int main () {

    complex input1=cin_input();
    complex input2=cin_input();
    complex result;
    char operation;
    cin >> operation;
    switch (operation)
    {
        case '+':
            result=sum(input1,input2);
            output(result);
            break;

        case '-':
            result=subtract(input1,input2);
            output(result);
            break;
            
        case '*':
            result=product(input1,input2);
            output(result);
            break;
            
    }

} 