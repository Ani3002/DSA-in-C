#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];			
		}
	}
	printf("After Addition : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]\t",c[i][j]);			
		}
		printf("\n");
	}	
}
void sub(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];			
		}
	}
	printf("After Subtraction : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]\t",c[i][j]);			
		}
		printf("\n");
	}	
}
void mul(int a[10][10],int b[10][10],int c[10][10],int m,int n,int p)
{
	int sum=0,i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			for(k=0;k<n;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("After Multiplication : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]\t",c[i][j]);			
		}
		printf("\n");
	}	
}
void transpose(int a[10][10],int c[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[j][i]=a[i][j];
		}
	}
	printf("After Transpose : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]\t",c[i][j]);			
		}
		printf("\n");
	}	
}
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,o,p,i,j,ch,h;
	printf("Enter The No. of Rows for Matrix 1 : ");
	scanf("%d",&m);
	printf("Enter The No. of Column for Matrix 1 :");
	scanf("%d",&n);
	
	printf("Enter the Elements of Matrix 1 : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	while(1)
	{
	printf("Enter Your Choice : \n1. Transpose\n2. Perform Operation with Another Matrix\n3. Exit\n");
	scanf("%d",&ch);	
	if(ch==1)
	{
		transpose(a,c,m,n);
		exit(0);
	}
	else if(ch==2)
	{
		printf("Enter The No. of Rows for Matrix 2 : ");
		scanf("%d",&o);
		printf("Enter The No. of Column for Matrix 2 :");
		scanf("%d",&p);
		printf("Enter the Elements of Matrix 2 : \n");
		for(i=0;i<o;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("Element [%d][%d] : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		while(1)
		{
			printf("Enter Your Operation : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\n");
			scanf("%d",&h);
			if(h==1)
			{
				if(m==o&&n==p)
				{
					add(a,b,c,m,n);
					exit(0);	
				}
				else
					printf("Addition Not Possible...");
			}
			else if(h==2)
			{
				if(m==o&&n==p)
				{
					sub(a,b,c,m,n);
					exit(0);	
				}
				else
					printf("Subtraction Not Possible...");
				
			}
			else if(h==3)
			{
				if(n==o)
				{
					mul(a,b,c,m,n,p);
					exit(0);
				}
				else
				{
					printf("Matrix Multiplication Not Possible...");
				}
			}
			else if(h==4)
			{
				exit(0);
			}
			else
			{
				printf("Wrong Choice...Try Again...\n");
			}
		}
		exit(0);	
	}
	else if(ch==3)
 	{
 		exit(0);	
 	}
 	else
		 printf("Wrong Choice...Try Again...\n");		
	}
}
