#include<iostream>
using namespace std;
int main()
{
	int num,res=0,temp,rem;
	cout<<"Enter number: ";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		res=res*10+rem;
		temp/=10;
	}
	if(num==res)
	cout<<"Enter number "<<num<<" is a palindrome";
	else
	cout<<"Enter number "<<num<<" is not a palindrome";
}