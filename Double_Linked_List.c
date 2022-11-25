#include<stdio.h>
#include<stdlib.h>
typedef struct DLL
{
	int data;
	struct DLL *next;
	struct DLL *prev;
}node;
node *header;
int n=0;
void insertfront()
{
	node *ptr;
	int item;
	printf("Enter Your Item : ");
	scanf("%d",&item);
	ptr=(node *)malloc(sizeof(node));
	ptr->data=item;
	if(header==NULL)
	{
		header=ptr;
		ptr->next=NULL;
		ptr->prev=NULL;
	}
	else
	{
		header->prev=ptr;
		ptr->next=header;
		ptr->prev=NULL;
		header=ptr;
	}
	n++;
}
void insertlast()
{
	node *ptr,*ptr1;
	int item;
	printf("Enter Your Item : ");
	scanf("%d",&item);
	ptr=(node *)malloc(sizeof(node));
	ptr->data=item;
	if(header==NULL)
	{
		header=ptr;
		ptr->next=NULL;
		ptr->prev=NULL;
	}
	else
	{
		ptr1=header;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr->prev=ptr1;
		ptr1->next=ptr;
		ptr->next=NULL;
	}
	n++;
}
void insertany()
{
	node *ptr,*ptr1,*ptr2;
	int item,c=1,loc;
	printf("Enter Your Item : ");
	scanf("%d",&item);
	printf("Enter Your Location : ");
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
		ptr->next=NULL;
		ptr->prev=NULL;
	}
	else if(loc==1)
	{
		header->prev=ptr;
		ptr->next=header;
		ptr->prev=NULL;
		header=ptr;	
	}
	else
	{
		ptr1=header;
		while(c!=loc-1)
		{
			ptr1=ptr1->next;
			c++;	
		}
		ptr2=ptr1->next;
		ptr->next=ptr2;
		ptr->prev=ptr1;
		ptr2->prev=ptr;
		ptr1->next=ptr;
	}
	}
	
}
void delfront()
{
	node *ptr,*ptr1;
	if(header==NULL)
	{
		printf("Memory Underflow...Deletion Not Possible");
	}
	else
	{
		ptr=header;
		ptr1=header->next;
		header=ptr1;
		header->prev=NULL;
		free(ptr);	
		n--;
	}
}
void dellast()
{
	node *ptr,*ptr1;
	
	if(header==NULL)
	{
		printf("Memory Underflow...Deletion Not Possible");
	}
	else
	{
		ptr=header;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;	
		}
		ptr1=ptr->prev;
		ptr1->next=NULL;
		free(ptr);
		n--;
	}
	
}
void delany()
{
	node *ptr,*ptr1,*ptr2;
	int item,loc=1,flag=0;
	if(header==NULL)
	{
		printf("Memory Underflow...Deletion Not Possible");
	}
	else
	{
		printf("Enter The Item to be Deleted : ");
		scanf("%d",&item);
		ptr2=header;
		do
		{
			if(ptr2->data==item)
			{
				flag=1;
			}
			ptr2=ptr2->next;
		}while(ptr2!=NULL);
		if(flag==0)
		{
			printf("Element doesn't exists...Deletion not possible...\n");
		}
		else if(flag==1)
		{
			ptr=header;
			while(ptr->data!=item)
			{
				ptr=ptr->next;
				loc++;
			}	
			if(loc==1)
			{
				delfront();
			}
			else if(ptr->next==NULL)
			{
				dellast();
			}
			else
			{
				ptr1=ptr->prev;
				ptr2=ptr->next;
				ptr2->prev=ptr1;
				ptr1->next=ptr2;
				free(ptr);
				n--;
			}
		}	
	}
}
void display()
{
	node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("<-[%d]->",ptr->data);
		ptr=ptr->next;
	}
	printf("NodeCount : %d ",n);
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
			case 2: printf("1. At Front\n2. At End\n3. At any Position\n");
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
	
	/*insertf();
	insertf();
	insertf();
	insertf();
	insertf();
	insertf();
	display();
	printf("\n");
	delany();
	display();*/
}
