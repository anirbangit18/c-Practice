#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,digit=0,result=0,rem;
	cout<<"Enter the number: \n";
	cin>>num;
	int temp=num;
	while(temp!=0)
	{
		temp/=10;
		digit++;
	}
	temp=num;
	while(temp!=0){
		rem=temp%10;
		result=result+pow(rem,digit);
		temp/=10;
	}
	if(result==num)
	cout<<num<< " is an Armstrong number";
	else
	cout<<num<< " is not an Armstrong number";
	return 0;
}