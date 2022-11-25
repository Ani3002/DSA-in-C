#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,s;
	int j,num;
	int count=0;
	int *p;
	printf("enter the number of elements : ");
	scanf("%d",&s);
	p=(int*)malloc(s*sizeof(int));
	for(i=0;i<s;i++)
	{
		printf("enter data : ");
		scanf("%d",&n);
		*(p+i)=n;
	}
	printf("enter the number you want to search : ");
	scanf("%d",&num);
	for(j=0;j<s;j++)
	{
		if(*p==num)
		{
			printf("found it at %d",p);
		}
		p++;
		count++;
	}
	printf("/n total number of comparison is %d",count);
}
