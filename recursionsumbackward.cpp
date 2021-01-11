#include<iostream>
using namespace std;
int func(int a)
{
	int s;
	if(a==1)
	{
		return a;
	}
	else
	{
		s=a+func(a-1);
		return s;
	}
}
int main()
{
	int sum;
	int a;
	cout<<"Enter a number to Find the Sum from its Backward upto 1"<<endl;
	cin>>a;
	sum=func(a);
	cout<<"Sum is :"<<sum<<endl;
	return 0;
}


