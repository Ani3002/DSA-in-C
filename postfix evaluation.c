#include<stdio.h>
#include<string.h>
#include<ctype.h>

int a[10],top=-1;

void push(int item)
{
	if(top>10)
	{
		printf("OVERFLOW");
	}
	else 
	{
		top++;
		a[top]=item;
	}
}

int pop()
{
	int item;
	if(top<0)
	{
		printf("UNDERFLOW");
	}
	else 
	{
		item=a[top];
		top--;
		return item;
	}
}

void display()
{
	printf("THE EVALUATED VALUE IS:%d",a[top]);
}
void postfix(char p[])
{
	int i,t1,t2,result,b;
	char x;
	for(i=0;p[i]!='\0';i++)
	{
		x=p[i];
		if(isdigit(x))
		{
			push((int)(x-'0'));
			
		}
		else if(x==')')
		{
			display();
		}
		else 
		{
			t1=pop();
			t2=pop();
			switch(x)
			{
				case '+':
					result=t2+t1;
					push(result);
					break;
				
				case '-':
					result=t2-t1;
					push(result);
					break;
					
				case '*':
					result=t2*t1;
					push(result);
					break;
					
				case '/':
					result=t2/t1;
					push(result);
					break;
				
				case '^':
					result=t2^t1;
					push(result);
					break;
			}
		}
	}
}

int main()
{
	char p[100];
	printf("ENTER A POSTFIX EXPRESSION:");
	scanf("%s",&p);
	postfix(p);
}
