//linear search with and without function
#include<stdio.h>
#include<conio.h>
//void main()
void ls()
{
	int a[10],i,k,loc=-1;
	printf("enter values in array:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value you want to search:\n");
	scanf("%d",&k);
	for(i=0;i<=9;i++)
	{
		if (a[i]==k)
		{                        
			loc=i;
			break;
		}
	}
		if (loc==-1)
		{
			printf("%d not found",k);
		}
		else
		printf("%d is found at location %d",k,loc+1);
}
void main()
{
ls();
getch();	
}
//&&  logical AND(*)
//|| logical OR(+)
//! logical NOT
/*#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5;
	//if((a=9)&&(a=7))
	if((a=9)||(a=7))
	{
		printf("%d",a);
	}
	printf("%d",a);
getch();	
}*/
