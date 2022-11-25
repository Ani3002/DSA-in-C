#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int data;
	struct linked_list *link;
}node;
node *header;
void insert()
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
		ptr->link=NULL;
	}
	else
	{
		ptr->link=header;
		header=ptr;
	}
}
void insertap()
{
	node *ptr,*ptr1,*ptr2;
	int c=1,item,loc;
	printf("Enter Your Data : ");
	scanf("%d",&item);
	printf("Enter Your Location : ");
	scanf("%d",&loc);
	ptr2=(node *)malloc(sizeof(node));
	ptr2->data=item;
	ptr1=header;
	ptr=ptr1->link;
	while(c!=loc-1)
	{
		ptr1=ptr;
		ptr=ptr->link;
		c++;
	}
	ptr2->link=ptr;
	ptr1->link=ptr2;
}
void insertl()
{
	node *ptr1,*ptr;
	int item;
	printf("Enter Your Data : ");
	scanf("%d",&item);
	ptr=(node *)malloc(sizeof(node));
	ptr->data=item;
	ptr1=header;
	while(ptr1->link!=NULL)
	{
		ptr1=ptr1->link;
	}
	ptr1->link=ptr;
	ptr->link=NULL;
}
void display()
{
	node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
}
void dell()
{
	node *ptr,*ptr1;
	ptr1=header;
	ptr=ptr1->link;
	while(ptr->link!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	ptr1->link=NULL;
	free(ptr);
}
void delap()
{
	node *ptr,*ptr1,*ptr2;
	int item;
	printf("Enter the Item to be Deleted : ");
	scanf("%d",&item);
	ptr1=header;
	if(ptr1->data==item)
	{
		delf();
	}
	else
	{
		ptr=ptr1->link;
		while(ptr->data!=item)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr2=ptr->link;
		ptr1->link=ptr2;
		free(ptr);	
	}
}
void delf()
{
	node *ptr,*ptr1;
	ptr1=header;
	ptr=ptr1->link;
	header=ptr;
	free(ptr1);
}
int main()
{
	insert();
	insert();
	insert();
	insert();
	insert();
	display();
	printf("\n");
	insertl();
	display();
	printf("\n");
	delf();
	display();
	printf("\n");
	delap();
	display();	
}

