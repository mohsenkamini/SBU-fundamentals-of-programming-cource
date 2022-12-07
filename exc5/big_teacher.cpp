#include <iostream>
using namespace std;

int main () {

	int number_of_students,number_of_ids,id,product_of_ids=1;
	long int powered_10=1,sum=0;
	bool is_id_1_absent=false,is_id_1_present=false,nobody_is_absent=true;		// whether id 1 has been received
				
	cin >> number_of_students >> number_of_ids;

	for (int i =1 ; i <= number_of_ids ; i++){
	
		cin >> id;


		// handle 1 here
		if (id == 1 && is_id_1_present == 1)
		{
			is_id_1_absent=true;
			nobody_is_absent=false;
		}
		else
		{
			if (id == 1)
			{
				is_id_1_present=true;
			}
		}
		// store others here
		sum+=(id*powered_10);
		if (id >= 10)
			powered_10*=1000;
		else
			powered_10*=10;
//		product_of_ids*=id;
		
	}
	cout << sum;
//
//	if (is_id_1_absent){
//	
//		cout << "1" ;
//	}	
//
//	for (int i =number_of_students ; i > 1 ; i--)
//	{
//		if (product_of_ids % i == 0)
//		{
//			if (product_of_ids % (i*i) == 0)
//			{
//				if (nobody_is_absent)
//					cout << i ;
//				else
//					cout << " " << i ;
//
//				nobody_is_absent=false;
//				product_of_ids/=i;
//			}
//			product_of_ids/=i;
//		}
//		else{
//			if (nobody_is_absent)
//				cout << i ;
//			else
//				cout << " " << i ;
//
//			nobody_is_absent=false;
//			
//		}
//	}
//
//
//	if (nobody_is_absent)
//		cout << 0;
}




