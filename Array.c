#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int n;
void traverse (int a[])
{
	int i; 
    printf("The elements are-\n");
    for(i=0;i<n;i++)
 {
	printf("%d,",a[i]);
 }
}
void insert (int a[])
{
	int i,pos,item;
	printf("Enter the item to be inserted");
	scanf("%d",& item);
	printf("Enter the position of insertion");
	scanf("%d",&pos);
	for(i=n+1;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	n++;
}
void deletion (int a[])
{
	int i,pos,item,f=0;
	printf("Enter the item to be deleted");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			pos=i;
			f==1;
		}
	}
	if(f==1)
	{
		for(i=pos;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n=n-1;
		printf("Deletion successful");
	}
	else
	printf("Item not found");
}
int main()
{
	int a[100],ch,n,i;
	printf("Enter the size of the Array");
	scanf("%d",&n);
	printf ("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(1)
	{
	
	printf("Press 1 for Insertion,2 for Deletion,3 for Display");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		insert(a);
		break;
		case 2:
		deletion(a);
		break;
		case 3:
		traverse(a);
		break;
		case 4:
		exit(0);
		default:
	    printf("Wrong choice");
	}
}
	return 0;
}



 
