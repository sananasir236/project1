#include <iostream>
using namespace std;
int main ()
{
	int no,var,rem,binary=0,i=1;
	cout<<"Enter the decimal no: ";
	cin>>no;
	
	var=no;
	while(no!=0)
	{
	rem=no%2;
	no=no/2;
	binary=binary+(rem*i);
	i=i*10;
    }
	cout<<"Binary equivalent of "<<var<<" is:"<<binary;
	cout<<endl;
}
