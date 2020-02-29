#include <iostream>
#include <iomanip>
using namespace std;
//----------------------Prototype function------------------
long int integerPower(int, int);
//----------------------------------------------------------
int main()
{	
	int bas,expo;
	cout<<"Exponentiation program "<<endl;
	cout<<"#############################"<<endl;
	cout<<"Type the base: ";
	cin>>bas;
	cout<<"Type the exponent: ";
	cin>>expo;
	cout<<"The result of "<< bas<<" to the "<< expo<<" is "<<integerPower(bas,expo)<<endl;
	
}
//-----------Function declaration------------------------------
long int integerPower(int base, int exponent){
	int op=1;
	for(int i=1;i<=exponent;i++){
		op=op*base;
		}
	return op;
	}
}


