#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int data;
	struct link_list*link;
}node;
node *header;
void insert()
{
	node *ptr;
	int item;
	printf("enter your item : ");
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
void display()
{
	node *ptr;
	ptr=header;
	while(ptr !=NULL)
	{
		printf("%d->",ptr->data);
	}
}
void dell()
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
	display();
	printf("\n");
	dell();
	display();
	printf("\n");
	dell();
	display();
	
}
