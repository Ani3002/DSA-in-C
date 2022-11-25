#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
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
	 for(i=1;i<n;i++)
{
	temp=a[i];
	j=i-1;
	while(j>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
printf("\n");
printf("After Sorting : ");
for(i=0;i<n;i++)
{
	printf("[%d]",a[i]);
}
}



