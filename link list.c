//link list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}node;
void main()
{
	node *start=NULL,*ptr,*t;
	int n,i;
	printf("Enter total no. of node in link list:\n");
	scanf("%d",&n);
	t=(node*)malloc(sizeof(node));
	for(i=0;i<n;i++)
	{
		printf("enter the value in link list:\n");
		scanf("%d",&t->info);
		if(start==NULL)
		{
			t->next=start;
			start->next=t;
			start=ptr=t;
		}
		else
		{
			t->next=ptr->next;
			ptr->next=t;
			ptr=t;
		}
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
getch();
}
