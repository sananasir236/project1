#include <iostream>
using namespace std;
int main ()
{  
  int i,sum1,sum2;
  sum1=0;sum2=0;
  cout<<"Sum of the first ten even number:"<<endl;
  for(i=0;i<=20;i=i+2)
    sum1=sum1+i;
    cout<<sum1<<endl;
    cout<<"Sum of the first ten odd number:"<<endl;
    for(i=1;i<=19;i=i+2)
    sum2=sum2+i;
    cout<<sum2<<endl;
 }
