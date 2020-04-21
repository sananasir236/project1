#include <iostream>
using namespace std;
int main ()
{
	double n,guess,r;
    int i;
    cout<<"Enter the value for n:";
    cin>>n;
    guess=n/2;
    for(i=1;i<=5;i++)
    {
    	 r = (n / guess);
    	 guess = (guess+r)/2;
	}
	cout<<"The square root of positive number "<<n<<" is::"<<guess<<endl;
}
