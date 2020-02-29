#include <iostream>
#include <iomanip>
using namespace std;
//-------------------------------------------------------------------------------------------
/*
function prototype
*/
unsigned long fibo(unsigned long);
//-------------------------------------
int main()
{
	cout<<"How many terms of the Fibonacci series do you want? :"<<endl;
	int term,count;
	cin>>term;
	cout<<"Fibonacci of " <<term<<" is "<<fibo(term)<<endl;
	
	for(int i=0; i<=term; i++)
	{
		count=i+1;
		cout<<"The Fibonacci's " <<count<<" term is: "<<fibo(i)<<endl;
	}
	
}

//------------------------------------------------------------------------------
//Function declaration
//------------------------------------------------------------------------------
unsigned long fibo(unsigned long num)
{
	if(num==0)
		return 0;
	else if (num==1)
		return 1;
	else 
		return fibo(num-1)+fibo(num-2);
	
}
