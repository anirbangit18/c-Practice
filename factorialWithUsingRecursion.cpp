#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num==0||num==1)
	return 1;
	else
	return(num*factorial(num-1));
}
int main()
{
	int num,fact;
	cout<<"Enter the number: \n";
	cin>>num;
	fact=factorial(num);
	cout<<"The Factorial of "<<num<<" is "<<fact;
}

