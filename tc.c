#include<stdio.h>
#include<string.h>

void main()
{
char s[100],a[100];
int i,l,d,j=0;
printf("Enter any string");
gets(s);

l=strlen(s);
 //printf("length=%d",l);

	for(i=l;i>=0;i--)
	{
		if (s[i]==' ')
		{
			d=i;
			//printf("location=%d",d);
			break;
		}
	}
	
	for(i=0;i<d;i++)
	{
		if(i==0)
		{
			a[j]=s[i];
			j++;
		}
		else{
			if(s[i]==' ')
			{
				a[j]='.';
				a[j+1]=s[i+1];
				j=j+2;
			}
		}
	}
	
	for(i=d;i<=l;i++)
	{
		a[j]=s[i];
		j++;
	}
	
printf("%s",a);
}

