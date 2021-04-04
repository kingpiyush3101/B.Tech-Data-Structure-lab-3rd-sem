//Malloc,Calloc,Realloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *p,n,n1,i;
	printf("Enter total no. block:\n");
	scanf("%d",&n);
	//p=(int*)malloc(n*2);
	p=(int*)calloc(n,2);
	printf("Enter %d numbers :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Entered numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\nEnter the no. of element you want to add:\n");
	scanf("%d",&n1);
	p=(int*)realloc(p,n1);
	printf("Enter elements:\n");
	for(i=n;i<(n+n1);i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\nUpdated array is:\n");
	for(i=0;i<(n+n1);i++)
	{
		printf("%d ",p[i]);
	}
getch();
}
