#include<stdio.h>
#include<iostream>
#define max 5
using namespace std;

int arr[max],top=-1;
int isEmpty()
{
	if(top==-1){
		cout<<"Stack is UnderFlow.";
		return 1;
	}
	else{	
		return 0;	
	}
}
int isFull()
{
	if(top==max-1){
		cout<<"Stack is OverFlow.";
		return 1;
	}
	else	
		return 0;
}
void push(int data)
{
	if(top==max-1){
		cout<<"\nStack overflow";
		return;
	}
	else{
		top+=1;
		arr[top]=data;
		return;
	}
}
int pop()
{
	int val;
	if(top==-1)
	{
		cout<<"\nStack is UnderFlow";
		return 0;
	}
	else
	{
		val=arr[top];
		top-=1;
		return val;
	}	
}
void peek()
{
	if(isEmpty());
	else
	cout<<"\nThe top element is "<<arr[top];
}
void display()
{
	int i;
	if(isEmpty());
	cout<<"\nStack elements are: \n";
		for(i=0;i<=top;i++){	
		cout<<arr[i]<<" ";	
		}	
}
int main()
{
	int data,choice;
	do
	{
		cout<<"\n\n**************Stack Operation using Array****************";
		cout<<"\n\n1. Push()";
		cout<<"\n\n2. Pop()";
		cout<<"\n\n3. isEmpty()";
		cout<<"\n\n4. isFull()";
		cout<<"\n\n5. peek()";
		cout<<"\n\n6. Display()";
		cout<<"\n\n7. Exit()";
		cout<<"\n\nEnter Choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter a data: \n";
				cin>>data;
				push(data);
				break;
			case 2:
				data=pop();
				cout<<"pop value is: "<<data<<endl;
				break;
			case 3:
				isEmpty();
				break;
			case 4:
				isFull();
				break;
			case 5:
				peek();
				break;	
			case 6:
				display();
				break;
			case 7:
				exit(0);
				break;	
			default:
				cout<<"Enter Correct choice: ";							
		}
	}while(1);		
}