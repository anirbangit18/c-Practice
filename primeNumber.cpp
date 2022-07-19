#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
			count++;
	}
	if(count>=1)
		cout<<num<<" is not a prime number.";
	else
		cout<<num<<" is a prime number.";	
}