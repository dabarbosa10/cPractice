#include <iostream>
#include <cmath>
using namespace std;

//first declare the function

double fact(int k);

int main(){
  int n;
  cout<<"Insert a number to calculate its factorial: "<<endl;
  cin>>n;
  cout<<"The factorial of "<<n<< " is "<<fact(n)<<endl;
  cout<<"And the previous factorials are :" <<endl;
  for(int j=1; j<=n;j++){
    cout<<" Factorial of "<<j<<" is: " <<fact(j)<<endl;
  }





}

double fact(int k){
  int n;
  double kFact=1.0;
  if(k<=0){
    cout<< "Is imposible to calculate the factorial of %d";
    return 0.0;
  }
  for(n=2;n<=k;n++){
    kFact=kFact*n;
  }
  return kFact;
}
