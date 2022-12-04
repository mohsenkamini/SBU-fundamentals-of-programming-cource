#include <iostream>
using namespace std;

int kmm (int a,int b);
int bmm (int a,int b);
int max(int a, int b)
{
	if (a > b )
		return a;
	else
		return b;
}

int min(int a, int b)
{
	if (a < b )
		return a;
	else
		return b;
}

int main () {

	cout << "kmm " << kmm(1,234) <<"    "<< kmm(4,30);
	cout << "bmm " << bmm(120,14) <<"    "<< bmm(24,18);
//	int n,input1,input2;
//	cin >> n >> input1;
//	for (int i =1 ; i <= n ; i++)
//	{
//		cin >> input2;
//		if (i % 2 == 1)
//		{
//			input1=kmm(input1,input2);
//		}
//		else
//		{
//			input1=bmm(input1,input2);
//		}
//	}
//	cout << input1;

}


int kmm (int a,int b)
{
	int result=a*b;
	for (int i=min(a,b) ; i > 1 ; i--)
	{
		// cout << i << endl;
		if ( result % i == 0 && max (a,b) % i == 0 && min (a,b) % i == 0)
		{
				result/=i;
		}
	}
	return result;
}



int bmm (int a,int b)
{

}

