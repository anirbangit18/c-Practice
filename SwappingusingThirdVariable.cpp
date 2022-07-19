#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the Second number: ";
	cin>>b;
	cout<<"\nBefore Swapping number first number is: "<<a;
	cout<<"\nBefore Swapping number second number is: "<<b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n";
	
	cout<<"\nAfter Swapping number first number is: "<<a;
	cout<<"\nAfter Swapping number second number is: "<<b;
	
	return 0;
	
}