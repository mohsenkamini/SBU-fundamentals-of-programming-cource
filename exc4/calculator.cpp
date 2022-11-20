#include <iostream>
using namespace std;
int main () {

	char op ;
	double n,m,result;
	cin >> n ;
	cin >> op;
	cin >> m ;
	switch (op){
		case '+' : result = n+m; break ;
		case '-' : result = n-m; break ;
		case '*' : result = n*m; break ;
		case '/' : result = n/m; break ;
	}
	printf ("%.2f",result) ;
	return 0 ;
}
