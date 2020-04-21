#include <iostream>
using namespace std;
int main ()
{
int i,n;
float sum=0,x,a=1;

cout<<"1+1/2+1/3+.....1/45"<<endl;
cout<<"How many terms(ex: 1,2,3....n)?";
cin>>n;

for(i=0;i<n;++i)
{
x=a/(a+1);
sum+=x;
a+=3;
}

cout<<"Sum="<<sum;
cout<<endl;
}


