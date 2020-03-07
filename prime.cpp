#include<iostream>
#include<iomanip>

using namespace std;

//-----------------Prototype function-------
void primeNumber(int);
//-----------------------------------------


int main(){
  int m;
  cout<<"Type a number: ";
  cin>>m;
  //primeNumber(m);
  for(int j=2;j<=m;j++){
    primeNumber(j);
  }
  //cout<<" Final" <<endl;
  //primeNumber(m);
  
}

//-------function declaration---------------
void primeNumber(int n){
  int p=0;
  for(int i=1; i<=n;i++)
    {
      if(n%i==0){
	p+=1;
      }
    }
  if(p>2){
    cout<<"The number "<<n<<" is not a prime."<<endl;
  }
  else if(p=2){
    cout<<"The number "<< n <<" is a prime."<<endl;
  }
	

}

//----------------------------------------
