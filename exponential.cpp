#include <iostream>
#include <cmath>
using namespace std;

int main(){

double x, sn,an, nFact,eps;
int n;

cout<<" Insert x in order to calculate exp(x): "<<endl;
cin>>x;

eps=1.0e-8;
sn=1.0+x;
nFact=1;
n=1;
an=x;

while(fabs(an)/(1+fabs(an))>eps)
{
n++;
nFact=nFact*n;
an=pow(x,n)/nFact;
sn+=an;
}

cout<< "exp(x) = " <<sn<<endl;

}


