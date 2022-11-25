#include<stdio.h>
int data[3][3],len;//global variable 
void insert(int r,int c,int val)
{
	data[len][0]=r+1;
	data[len][1]=c+1;
	data[len][2]=val;
	len++;
}
void print()
{
int i;
printf("\n sparse matrix\n row coloumn value\n");
for (i=0;i<len;i++)
{
	printf("%d    %d     %d\n",data[i][0],data[i][1],data[i][2]);
	
}
}
int main()
{
	int i,j,r=3,c=3;//array size 9
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nENTER AN ELEMENT");
		
			scanf("%d",&a[i][j]);
		}
	}		  
	printf("The matrix is\n :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
			
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	if(a[i][j]>0)
	insert(i,j,a[i][j]);
	print();
	return 0;
}
