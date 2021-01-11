#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n>0)
	return (n*factorial(n-1));
	else
	return (1);
}
int main()
{
	int fact;
	int num;
	cout<<"Enter the Number to find Factorial "<<endl;
	cin>>num;
	fact=factorial(num);
	cout<<"Factorial is : "<<fact<<endl;
	return 0;
}
