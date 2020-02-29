#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Function prototype
double calculateCharges(double );

int main(){
	double car1,car2,car3;
	cout<<"Type the number of hours for car 1: ";
	cin>>car1;
	cout<<"\nType the number of hours of car 2: ";
	cin>>car2;
	cout<<"\nType the number of hours of car 3: ";
	cin>>car3;
	
	double totalH,totalC;
	totalH=car1+car2+car3;
	totalC=calculateCharges(car1)+calculateCharges(car2)+calculateCharges(car3);
	
	cout<<"Car"<<setw(15)<<"Hours"<<setw(15)<<"Charge"<<endl;
	cout<<"1"<<setw(17)<<car1<<setw(10)<<calculateCharges(car1)<<endl;
	cout<<"2"<<setw(17)<<car2<<setw(10)<<calculateCharges(car2)<<endl;
	cout<<"3"<<setw(17)<<car3<<setw(10)<<calculateCharges(car3)<<endl;
	cout<<"Total"<<setw(15)<<totalH<<setw(10)<<totalC<<endl;
	
	
		
}

// Function Declaration
double calculateCharges(double num){
	if(num<=3.0)
		return 2.0;
	else if(num>3.0 && num<24)
		return 2.0+0.5*(floor(num)-3);
	else if(num==24)
		return 10;
	else
		cout<<"Number incorrect";
}
