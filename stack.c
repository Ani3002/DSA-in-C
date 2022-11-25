#include<stdio.h>
#define buffer_size 10
int stack[buffer_size];
int sp=-1;
void push(int val)
{
	if(sp==buffer_size)
	{
		printf("OVERFLOW !!!");
		return;
	}
	sp++;
	stack[sp]=val;
	printf("\n%d Pushed\n",val);
}
void pop()
{
	if(sp==-1)
	{
		printf("UNDERFLOW !!!");
		return;
	}
	printf("\n%d Popped\n",stack[sp]);
	sp--;
}
void show()
{
	int i;
	for(i=sp;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
void main()
{
	int ch,val;
	printf("1. PUSH \n2. POP \n3. SHOW \n4. EXIT \nEnter your choice -> [ ]\b\b");
	scanf("%d",&ch);
	while(ch!=4)
	{
		if(ch==1)
		{
			printf("Enter a value :: ");
			scanf("%d",&val);
			push(val);	
		}
		else if(ch==2)
		{
			pop();
		}
		else if(ch==3)
		{
			show();
		}
		else if(ch==4)
		{
			break;
		}
		else
		{
			printf("Sorry wrong input");
		}
		printf("\n\n\n\n\n\n\n\n\n");
		system("pause");
		system("cls");
		printf("1. PUSH \n2. POP \n3. SHOW \n4. EXIT \nEnter your choice -> [ ]\b\b");
		scanf("%d",&ch);
	}
}
