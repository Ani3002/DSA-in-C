#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100],front=-1,rear=-1;
void enqueue(int item)
{
	if (rear==99)
	{
		printf("\n Overflow queue is full.");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			
		}
		rear=rear+1;
		a[rear]=item;
		printf("\n new item inserted");
	}
}
void dequeue()
{
   int item;
   if(front==-1)
{
	printf("\nUnderflow.");
}
else
{
	if(front==rear)
	{
		item=a[front];
		front=rear=-1;
	}
	else
	{
		item=a[front];
		front=front+1;
	}
	printf("\nThe deleted value is:%d",item);
}
}
void status()
{
	int i;
	printf("\nThe values in the queue are:");
	for(i=front;i<=rear;i++)
	{
		printf("%d, ",a[i]);
	}
}
int main()
{
	int item,opt;
	while(1)
	{
		printf("\nPress 1-enqueue,2-dequeue,3-status,4-exit: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter a value :");
				scanf("%d",&item);
				enqueue(item);
				break;
				case 2:
				dequeue();
				break;
				case 3:
				status();
				break;
				case 4:
				exit(0);
				default:
				printf("\nWrong entry");
		}
	}
	return 0;
}
