#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}
int main()
{
	int num;
	//int fibnum;
	cout<<"Enter the number to find the element of Fibonacci Series "<<endl;
	cin>>num;
	//fibnum=fib(num);
	
	
	//cout<<num<<"th Member of Fibonacci Sereis is  "<<fibnum<<endl;
	cout<<"Fibonacci Sereis is"<<endl;
	for(int i=1;i<=num;i++)
	{
		cout<<fib(i)<<endl;
	}
	return 0;
 } 
