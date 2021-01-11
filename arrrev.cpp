#include<iostream>
using namespace std;
void arrrev(int arr[], int len)
{
	for(int k=len;k>=1;k--)
	{
		cout<<"Element ["<<k<<"] ="<<arr[k]<<endl;
	}
}
int main()
{
	int len;
	cout<<"Enter the Length of Any array"<<endl;
	cin>>len;
	int arr[len];
	cout<<"Enter the Elements in Array"<<endl;
	for(int i=1;i<=len;i++)
	{
		cout<<"Element ["<<i<<"] =";cin>>arr[i];
	}
	
	cout<<"Array in Simple Order"<<endl;
	for(int j=1;j<=len;j++)
	{
		cout<<"Element ["<<j<<"] ="<<arr[j]<<endl;
	}
	
	cout<<"Array in Reverse Order"<<endl;
	arrrev(arr, len);
	return 0;
	
}
