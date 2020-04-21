#include <iostream>
using namespace std;
int main ()
{
	int i,n,r;
	cout<<"Enter the number:";
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
	if(n%i==0)
	r=1;
	break;
	}
	if(r==0)
	cout<<"The number entered is prime number."<<endl;
	else
	cout<<"The number entered is not a prime number."<<endl;
}
