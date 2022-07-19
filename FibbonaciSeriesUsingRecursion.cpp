#include<iostream>
using namespace std;
void fib(int n){
    static int n1=0,n2=1,n3;
	if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf(" %d ",n3);    
         fib(n-1);    
    }    
} 
int main()
{
	int n,n1=0,n2=1;
	cout<<"Enter the range of the series: \n";
	cin>>n;
	if(n==1)
		cout<<n1;
	else if(n==2)
		cout<<n1<<" "<<n2;	
	else{
		cout<<n1<<" "<<n2;		
		fib(n-2);
	}
	return 0;
}