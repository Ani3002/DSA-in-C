#include<stdio.h>
union std
{
	int roll;
	char name[20];
	float t;
};
struct complex
{
	int real;
	int imag;
};
struct complex add_complex(struct complex c1,struct complex c2)
{
	struct complex c;
	c.real=c1.real+c2.real;
	c.imag=c1.imag+c2.imag;
	return c;
}
struct authors
{
	char name[50];
	int phone;
};
struct books
{
	int id;
	char title[50];
	struct authors auth;

};
void main()
{
	struct std s1,s2,s3;
	printf("Enter Student details \n");
	printf("Roll -> ");
	scanf("%d",&s1.roll);
	printf("Name -> ");
	scanf("%s",s1.name);
	printf("Enter Student details \n");
	printf("Roll -> ");
	scanf("%d",&s2.roll);
	printf("Name -> ");
	scanf("%s",s2.name);
	printf("Enter Student details \n");
	printf("Roll -> ");
	scanf("%d",&s3.roll);
	printf("Name -> ");
	scanf("%s",s3.name);
	system("cls");
	printf("    STUDENT DETAILS      \nROLL		NAME\n___________________________\n");
	printf("\n%d	%s",s1.roll,s1.name);
	printf("\n%d	%s",s2.roll,s2.name);
	printf("\n%d	%s",s3.roll,s3.name);
	printf("\n___________________________\n");
union std s[5];
int i;
for(i=0;i<5;i++)
{
	printf("Enter Student details \n");
	printf("Roll -> ");
	scanf("%d",&s[i].roll);
	printf("Name -> ");
	scanf("%s",s[i].name);
	system("cls");	
	
}
system("cls");
printf("    STUDENT DETAILS      \nROLL    NAME\n___________________________\n");
for(i=0;i<5;i++)
{
	
	printf("\n%d	%s",s[i].roll,s[i].name);
}
printf("\n___________________________\n");
struct complex c1,c2,c3;
printf("Enter First Complex number :: ");
scanf("%d+i%d",&c1.real,&c1.imag);
printf("\nEnter Second Complex number :: ");
scanf("%d+i%d",&c2.real,&c2.imag);
c3=add_complex(c1,c2);
printf("%d+i%d",c3.real,c3.imag);
}
