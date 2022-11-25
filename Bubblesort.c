#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : \n ");
	for(i=0;i<n;i++)
	{
		printf("Element [%d] :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Before Sorting : ");
	for(i=0;i<n;i++)
	{
		printf("[%d]",a[i]);
	}
	//Sorting Process
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n");
	printf("After sorting : \n ");
	for(i=0;i<n;i++)
	{
		printf("[%d] ",a[i]);
	}
}
