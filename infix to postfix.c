#include<stdlib.h>
#include<stdio.h>

char a[10];
int top=-1;

void push(char item)
{
    if(top>10)
    {
        printf("THE STACK IS FULL");
    }
    else
    {
        top++;
        a[top]=item;
    }
}

char pop()
{
    char item;
    if(top<0)
    {
        printf("THE STACK IS EMPTY");
    }
    else 
    {
        item=a[top];
        top--;
        return item;
    }
}

int operand(char ch)
{
    return ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'));
}

int precedence(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '^':
        return 3;
    }
}

int postfix(char p[])
{
    int i,k;
    char x;
    for(i=0,k=-1;p[i]!='\0';i++)
    {
        x=p[i];
        if(operand(x))
        {
            p[++k]=x;
        }
        else if(x=='(')
        {
            push(x);
        }
        else if(x==')')
        {
            while(a[top]!='(')
            {
                p[++k]=pop();
            }
            if(a[top]=='(')
            {
                pop();
            }
        }
        else
        {
            while(precedence(x)<=precedence(a[top]))
            {
                p[++k]=pop();
            }
            push(x);
        }
    }
    while(a[top]!=0)
    {
        p[++k]=pop();
    }
    p[++k]='\0';
    printf("%s",p);
}

int main()
{
    char p[100];
    printf("ENTER A INFIX EXPRESSION:");
    scanf("%s",&p);
    printf("THE POSTFIX EXPRESSION IS:");
    postfix(p);
    return 0;
}