#include<iostream>
using namespace std;
int main() 
{
	int num,a;
	double factorial;
	factorial=1;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>num;
	for (a=1;a<=num;a++) 
	{
	factorial=factorial*a;
	}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
}
