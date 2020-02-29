#include <iostream>
#include <iomanip>

using namespace std;

// function prototype
unsigned long factorial(unsigned long);

int main()
{
int num;
cout<<"Type a number in order to calculate its factorial: "<<endl;
cin>>num;

cout<<"The factorial is: "<< factorial(num)<<endl;	

cout<< "Now the factorials up to "<< num<<endl;
for(int i=0;i<=num; i++)
{
	cout<<setw(2)<<"The factorial of " << i << " is " << factorial(i)<<endl;
}

}

//function declaration
unsigned long factorial( unsigned long number)
{
	if(number<=1)
		return 1;
	else
		return number*factorial(number-1);
}
