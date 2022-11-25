#include<stdio.h>
int main()
{
	int a[100],i,j,min,n,temp;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : \n");
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
     //Sorting process
	for(i=0;i<n-1;i++)
	{	
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n");
	printf("after sorting : \n");
	for(i=0;i<n;i++)
	{
		printf("[%d]",a[i]);
	}
	
}
