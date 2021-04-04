//Choice Based : insert/delete/display the queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ms 10
int q[ms];
int f=-1,r=-1;
void insert(int value)
{
	if (r==ms-1)
	{
		printf("Queue is full\n");
	}
	else if(f==-1)
	{
		f=r=0;
		q[r]=value;
	}
	else
	{
		r=r+1;
		q[r]=value;
	}
}
void delete()
{
	if(f==-1)
	{
		printf("Queue is empty\n");
	}
	else if(f==r)
	{
		f=r=-1;
	}
	else
	{
		f=f+1;
	}
}
void display()
{
	int t=f;
	if (f==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("\nElements of Queue are:\n");
		for(t=f;t<=r;t++)
		{
			printf("%d\n",q[t]);
		}
	}
}
void main()
{
	int value,ch,c;
	do
	{
		printf("1 : insert\n");
		printf("2 : delete\n");
		printf("3 : display\n");
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:printf("Enter value:");
				   scanf("%d",&value);
				   insert(value);
				   break;
			case 2:delete();
				   break;
			case 3:display();
				   break;
			default:printf("Enter correct choice\n");
		}
		printf("Press y to continue:\n");
		fflush(stdin);
		c=getch();
	}while(c=='y'||c=='Y');
getch ();
}
