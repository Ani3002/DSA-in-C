#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	float data;
	int expo;
	struct node *link;
};
int main()
{
	int y=0;
	struct node *fr=NULL,*se=NULL,*ptr1;
	printf("Enter the first polynominal in decending order : ");
	while(y!=1)
	{
		ptr1=(struct node *)malloc(sizeof(struct node));
		printf("Enter the cofficient :");
		scanf("%f",&ptr1->expo);
		ptr1->link=NULL;
		if(fr==NULL)
		{
			fr=ptr1;
		}
		else
		{
			ptr1->link=fr;
			fr=ptr1;
		}
		printf("Press any key to continue and 1 to stop.");
		scanf("%d",&y);
	}
	y=0;
	printf("Enter the first polynominal in decending order : ");
	while(y!=1)
	{
		ptr1=(struct node *)malloc(sizeof(struct node));
		printf("Enter the coefficient :");
		scanf("%f",&ptr1->data);
		printf("Enter the exponent :");
		scanf("%f",&ptr1->expo);
		ptr1->link=NULL;
		if(se==NULL)
		{
			se=ptr1;
		}
		else
		{
			ptr1->link=se;
			se=ptr1;
		}
		printf("Press any key to continue and 1 to stop.");
		scanf("%d",&y);
	}
	printf("\n The polynomials are:");
	ptr1=fr;
	while(ptr1!=NULL)
	{
		printf("%fX^%d +",ptr1->data,ptr1->expo);
		ptr1=ptr1->link;
	}
	printf("\b ");
    printf("\n ");
}
