#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};

struct node *start=NULL;

void sll_insert_at_Begin(int item)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Insufficient Memory");
    	exit(0);
	}
	temp->data=item;
	temp->link=start ;
	start=temp;
}
void sll_insert_at_end(int item)
{
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Insufficient Memory");
    	exit(0);
	}
	temp->data=item;
	temp->link=NULL;
	if(start==NULL)
		start=temp;
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;	
	}	
}
void sll_insert_at_any_pos(int pos,int item)
{
	int i;
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Insufficient Memory");
    	exit(0);
	}
	temp->data=item;
	if(pos==1)
	{
		temp->link=start ;
		start=temp;
	}
	else
	{
		ptr=start;
		for(i=1;i<=pos-2&&ptr!=NULL;i++)
			ptr=ptr->link;
		if(temp==NULL)
		{
    		printf("Invalid Position");
			free(temp);
			return ;
		}
		temp->link=ptr->link;
		ptr->link=temp;
	}
	
}

void sll_deletion_at_begin()
{
	struct node *ptr;
	if(start==NULL)
		printf("No Node is present in Linked List to delete");
		ptr=start;
		start=start->link;
		free(ptr);
}
void sll_deletion_at_end()
{
	struct node *ptr,*prevptr;
	if(start==NULL)
	{
		printf("No Node is present in Linked List to delete");
		return;
	}
	ptr=start;
	if(ptr->link==NULL)
		start=NULL;
	else
	{
		while(ptr->link!=NULL)
		{
			prevptr=ptr;
			ptr=ptr->link;
		}
		prevptr->link=NULL;
	}
		free(ptr);
}

void sll_deletion_at_any_pos(int pos)
{
	struct node *ptr,*prevptr;
	int i;
	if(start==NULL)
	{
		printf("No Node Present ");
		return;
	}
	ptr=start;
	if(pos==1)
	{
		start=start->link;
	}
	else
	{
	
		for(i=1;i<=pos-1;i++)
		{
			prevptr=ptr;
			ptr=ptr->link;
			if(ptr==NULL)
				{
					printf("Invalid Position");
					return;
				}
		}
		prevptr->link=ptr->link;
	}
	free(ptr);
}
void sll_Reverse(struct node *curr)
{
	struct node *prev=NULL,*next=NULL;
	if(start==NULL)
	{
		printf("No node to reverse");
	}
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	start=prev;
}
void display()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("No node to display");
		
	}
	else
	{
		ptr=start;
		printf("Start->");
		while(ptr!=NULL)
		{
			printf("%d ->",ptr->data);
			ptr=ptr->link;
		}
		printf("NULL");
	}
}

int main()
{
	int n,item;
	for(;;)
	{
		 printf("\n\n*******Single Linked List Opereration*******\n");
		 printf("\n1. Create the Linked List by Insertion At Begin\n");
		 printf("\n2. Create the Linked List by Insertion At End\n");
		 printf("\n3. Create the Linked List by Insertion At any position\n");
		 printf("\n4. Deletion the  Node from Begin from Linked List\n");
		 printf("\n5. Deletion the  Node from End from Linked List\n");
		 printf("\n6. Deletion the  Node from any position from Linked List\n");
		 printf("\n7. Reverse the Linked List\n");
		 printf("\n8. Display\n");
		 printf("\n9. Exit\n");
		 printf("\nEnter Yours Choice: ");
		 scanf("%d",&n);
		 switch(n)
		 {
		 	 case 1:
		 		printf("Enter the item to be inserted: ");
		 		scanf("%d",&item);
		 		sll_insert_at_Begin(item);
		 		break;
		 	 case 2:
		 		printf("Enter the item to be inserted: ");
		 		scanf("%d",&item);
		 		sll_insert_at_end(item);
		 		break;
		 	 case 3:	
		 		int n;	
		 		printf("Enter the Position to be inserted: ");
		 		scanf("%d",&n);
		 		printf("Enter the item to be inserted: ");
		 		scanf("%d",&item);
		 		sll_insert_at_any_pos(n,item);
		 		break;	
			 case 4:
			 	sll_deletion_at_begin();
		 		break;
			 case 5: 
			 	 sll_deletion_at_end();
				 break;
			 case 6:
			 	 int pos;
			 	 printf("\nEnter the position the node: ");
			 	 scanf("%d",&pos);
			 	 sll_deletion_at_any_pos(pos);
			 	 break;
			 case 7:
			 	 sll_Reverse(start);
				  break;	  	  		 	
		 	 case 8:
			 	display();
			 	break;
			 case 9:
			 	exit(0);
			 	break; 
		 }
	}
}