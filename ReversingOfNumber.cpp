#include<iostream>
using namespace std;
int main()
{
	int num,rem,result=0;
	cout<<"Enter a number : ";
	cin>>num;
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		result=result*10+rem;
		num/=10;
	}
	cout<<"\nBefore reversing number is: "<<temp;
	cout<<"\nAfter reversing number is: "<<result;
	return 0;
}