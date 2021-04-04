//Binary search with function
#include<conio.h>
#include<stdio.h>
#define max 100
int bsearch(int a[],int lb,int ub,int value)
{
 int beg=lb,end=ub,loc=-1,mid;
 while(beg<=end&&loc==-1)
 {
         mid=(beg+end)/2;
         if(a[mid]==value)
                loc=mid;
         if(value>a[mid])
                beg=mid+1;
         else
                end=mid-1;
 }
 return loc;
}
void main()
{
 int lb,ub,s,loc;
 int a[max],value,i;
 printf("inter the size of array\n");
 scanf("%d",&s);
 lb=0;ub=s-1;
 printf("enter  %d values in increasing order\n",s);
 for(i=0;i<=ub;i++)
        scanf("%d",&a[i]);
 printf("enter value to be search:\n");
 scanf("%d",&value);
 loc=bsearch(a,lb,ub,value);
 if(loc==-1)
        printf("%d is not found.",value);
 else
        printf("%d is found at location %d",value,loc);
 getch();
}
/*//Binary Search without Function
#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
	int a[max],i,n,k,loc=-1,lb,ub,beg,mid,end;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	lb=0;ub=n-1;
	printf("Enter %d Elemennts:\n",n);
	for(i==0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Element to search:");
	scanf("%d",&k);
	beg=lb;end=ub;
	while(beg<=end&&loc==-1)
	{
		mid=(beg+end)/2;
		if(a[mid]==k)
		{
			loc=mid;
		}
		if(k>a[mid])
		{
			beg=mid+1;
		}
		else
		    end=mid-1;
	}
	if(loc=mid)
	printf("%d is found at position %d",k,loc+1);
	else
	printf("%d is not found.",k);
getch();		
}*/
