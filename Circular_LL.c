#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct CLL
{
	int data;
	struct CLL *link;	
}node;
node *header;
int n=0;
void insertfront()
{
	node *ptr,*ptr1;
	int item;
	printf("Enter The Item : ");
	scanf("%d",&item);
	ptr=(node *)malloc(sizeof(node));
	ptr->data=item;
	if(header==NULL)
	{
		
		header=ptr;
		ptr->link=ptr; 
	}
	else
	{
		ptr1=header;
		while(ptr1->link!=header)
		{
			ptr1=ptr1->link;
		}
		ptr1->link=ptr;
		ptr->link=header;
		header=ptr;

	}
	n++;
}
void insertlast()
{
	node *ptr,*ptr1;
	int item;
	printf("Enter The Item : ");
	scanf("%d",&item);
	ptr=(node *)malloc(sizeof(node));
	ptr->data=item;
	if(header==NULL)
	{
		
		header=ptr;
		ptr->link=ptr; 
	}
	else
	{
		ptr1=header;
		while(ptr1->link!=header)
		{
			ptr1=ptr1->link;
		}
		ptr->link=ptr1->link;
		ptr1->link=ptr;
	}
	n++;
}
void insertany()
{
	node *ptr1,*ptr2,*ptr;
	int item,c=1,loc;
	printf("Enter The Item : ");
	scanf("%d",&item);
	printf("Enter the Location : ");
	scanf("%d",&loc);
	if(loc>n)
	{
		printf("Insertion not possible...\n");
	}
	else
	{
		ptr=(node *)malloc(sizeof(node));
		ptr->data=item;
		if(header==NULL)
		{
		
			header=ptr;
			ptr->link=ptr; 
		}
		else if(loc==1)
		{
			ptr1=header;
			while(ptr1->link!=header)
			{
				ptr1=ptr1->link;
			}
			ptr1->link=ptr;
			ptr->link=header;
			header=ptr;
		}
		else
		{
			ptr1=header;
			while(c!=loc-1)
			{
				ptr1=ptr1->link;
				c++;
			}
			ptr->link=ptr1->link;
			ptr1->link=ptr;
		}
		n++;
	}
	
}
void delfront()
{
	node *ptr,*ptr1,*ptr2;
	if(header==NULL)
	{
		printf("Memory Underflow...Deletion Not Possible...\n");
	}
	else
	{
		ptr1=header;
		ptr2=ptr1->link;
		ptr=ptr1->link;
		while(ptr->link!=header)
		{
			ptr=ptr->link;
		}
		ptr->link=ptr2;
		header=ptr2;
		free(ptr1);
		n--;
	}
	
}
void dellast()
{
	node *ptr,*ptr1,*ptr2;
	if(header==NULL)
	{
		printf("Memory Underflow...Deletion Not Possible...\n");
	}
	else
	{
		ptr1=header;
		ptr2=header;
		ptr=ptr1->link;
		while(ptr->link!=header)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr1->link=ptr2;
		free(ptr);
		n--;
	}
	
}
void delany()
{
	node *ptr,*ptr1,*ptr2;
	int c=1,item,flag=0;
	printf("Enter the item to be Deleted : ");
	scanf("%d",&item);
	ptr2=header;
	do
	{
		if(ptr2->data==item)
		{
			flag=1;
		}
	}while(ptr2!=header);
	if(flag==0)
	{
		printf("Element Doesn't exist...");	
	}
	else if(flag==1)
	{
		ptr1=header;
		if(ptr1->data==item)
		{
			delfront();
		}
		else
		{
			ptr=ptr1->link;
			while(ptr->data!=item)
			{
				ptr1=ptr;
				ptr=ptr->link;
			if(ptr->data==item)
			{
				flag=1;
			}	
		}
			if(ptr->link==header)
			{
				dellast();
			}
			else
			{
				ptr1->link=ptr->link;
				free(ptr);
			}	
		}	
		n--;
	}
	
}
void display()
{
	node *ptr;
	ptr=header;
	do
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}while(ptr!=header);
	printf("\nNodecount : [%d]\n",n);
}
int main()
{
	int ch,i,d;
	while(1)
	{
		printf("Enter Your Choice : \n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("1. At Front\n2. At End\n3. At any Position\n");
					scanf("%d",&i);
					switch(i)
					{
						case 1 : insertfront();
									break;
						case 2 : insertlast();
									break;
						case 3 : insertany();
									break;
						default : printf("Wrong Choice...Try Again...\n");
					}
					break;
			case 2: printf("1. At Front\n2. At End\n3. Any Item\n");
					scanf("%d",&d);
					switch(d)
					{
						case 1 : delfront();
									break;
						case 2 : dellast();
									break;
						case 3 : delany();
									break;
						default : printf("Wrong Choice..,Try Again...");
					}
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			
		}
	}
	
	/*insert();
	insert();
	insert();
	insert();
	insert();
	display();
	printf("\n");
	delany();
	display();*/
}
