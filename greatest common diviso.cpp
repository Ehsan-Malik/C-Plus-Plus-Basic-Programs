//Greatest Common Divisor Using Euslid Theorem
#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	if(a==b)
		return(a);
	if(a%b==0)
		return(b);
	if(b%a==0)
		return(a);
	if(a>b)
		return(GCD((a%b),b));
	else
		return(GCD(a,(b%a)));
}
int main()
{
	int a,b;
	cout<<"Enter Two Numbers to Find Greatest Common Divisor "<<endl;
	cout<<"First Number"<<endl;
	cin>>a;
		cout<<"Second Number"<<endl;
	cin>>b;
	cout<<"The Greatest Common Divisor is "<<GCD(a,b)<<endl;
	return 0;
}
