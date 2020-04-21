#include <iostream>
using namespace std;
#include <cmath>
int main ()
{
	int pop_A,pop_B;
	float growth_rateA,growth_rateB,year = 1;
	cout<<"Enter the population of town A:";
	cin>>pop_A;
	cout<<"Enter the growth rate for town A:";
	cin>>growth_rateA;
	cout<<endl;
	cout<<"Enter the population of town B:";
	cin>>pop_B;
	cout<<"Enter the growth rate for town B:";
	cin>>growth_rateB;
	cout<<endl;
	if (pop_A<pop_B&&growth_rateA>growth_rateB)
    {
    while (pop_A<pop_B)
    {
    (pop_A=((growth_rateA/100)*pop_A)+pop_A);
    (pop_B=((growth_rateB/100)*pop_B)+pop_B);
    year++;
    }
    cout << "The final population of Town A is:: " << pop_A << endl;
    cout << "The final population of Town B is:: " << pop_B << endl;
    cout << "The population of town A will be greater than or equal to town B after  " << year << " years" << endl;
    }
    else
    {
    cout << "Invalid Data.";
    }
   cout<<endl;
}
