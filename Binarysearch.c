#include<conio.h>
#include<stdio.h>
int main()
{
	int list[100],n,val,i,beg,end,mid;
	int found=0,loc;
	printf("Enter the number of the of the elements : ");
	scanf("%d", &n);
	printf("enter the elements in accending order \n ");
	for (i=0;i<n;i++) 
	{
		printf("Enter the element %d : ",i+1);
		scanf("%d", &list[i]);
	}
	printf("Enter the number you want search : ");
	scanf("%d", &val);
	
	for(beg=0,end=n-1,mid=((beg+end)/2);beg<=end;mid=((beg+end)/2))
	{
		printf("%d",list[mid]);
		if (list[mid]==val)
		{
			loc=mid+1;
			found=1;
			break;
		}
		else if(list[mid]<val)
		{
			beg=mid+1;
	    }
	    else
	    {
	    	end=mid-1;
		}
	}
	if (found==1)
	{
		printf("Item %d found at %d",val,loc);
	}
	else
	{
		printf("Search unsuccessful");
	}
	return 0;
}
