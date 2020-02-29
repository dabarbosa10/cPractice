#include <iomanip>
#include <iostream>
using namespace std;
//----------------------------------
//------------------Prototype----------
int isPerfect(int );
//-----------------------------------
int main()
{
	int num;
	cout<<"Type an integer number: ";
	cin>>num;
	//cout<<"The number "<< num <<isPerfect(num)<<endl;
	for(int i=1;i<=num;i++){
		cout<< i <<" "<<isPerfect(i)<<endl;
	}
	
	
}
//-----------------------------------------------------
//----------------------Declaration--------------------
int isPerfect(int numb)
{
	int tot=1;
	for(int i=2; i<numb;i++ ){
		//cout<<num/i<<endl;
		if (numb%i ==0){
			tot+=numb/i;
	    }
	}
	if(tot==numb)
		cout<<" Is a perfect number: ";
	else
		cout<< " Is not a perfect number: ";
	
	return 0;
}
