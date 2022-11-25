#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100],top=-1;

void push(int item)
{
	if(top==99)
	printf("\nOVERFLOW!! ");
else
{
	top=top+1;
	a[top]=item;
	printf("\nNEW ITEM INSERTED");
}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("\nUnerflow");	
	}
	else
	{
		item=a[top];
		printf("\nThe pop value is %d",item);
		top=top-1;
	}
}
void peek()
{
	int i;
	printf("\nThe values of the stack are");
	for(i=0;i<=top;i++)
	{
		printf("%d,",a[i]);
	}
}
int main()
{
	int item,opt;
	while(1)
	{
		printf("\nPRESS 1-PUSH,2-POP,3-PEEK\STATUS,4-EXIT : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter a value");
				scanf("%d",&item);
				push(item);
				break;
				case 2:
					pop();
					break;
					case 3:
					    peek();
					    break;
					case 4:
						exit(0);
					default:
						printf("\nwrong entry");
					
		}
	}
	return 0;
}
