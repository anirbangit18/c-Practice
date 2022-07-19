#include<stdio.h>
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *link;
}*top=NULL;

int isEmpty()
{
	if(top==NULL)
	{
		cout<<"Stack is underflow";
		return 1;
	}
	else
		return 0;
}
void push(int data)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("Stack is Overflow.");
		exit(1);
	}
	ptr->data=data;
	ptr->link=NULL;
	ptr->link=top;
	top=ptr;
}

int pop()
{
	struct node *temp;
	temp=top;
	if(isEmpty());
	else
	{
		int val=temp->data;
		top=top->link;
		free(temp);
		temp=NULL;
		return val;
	}
}
void peek()
{
	if(isEmpty());
	else
		cout<<"The top element of the stack is: "<< top->data<<endl;
}
void display()
{
	struct node *temp;
	temp=top;
	if(isEmpty());
	else
	{
		printf("The stack elements are: ");
		while(temp)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
		printf("\n");
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
		cout<<"\n\n4. peek()";
		cout<<"\n\n5. Display()";
		cout<<"\n\n6. Exit()";
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
				peek();
				break;	
			case 5:
				display();
				break;
			case 6:
				exit(0);
				break;	
			default:
				cout<<"Enter Correct choice: ";							
		}
	}while(1);		
}