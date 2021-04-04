//Choice Based : pop/push/display the stack
#include<stdio.h>
#include<conio.h>
#define m 20
int stack[m],top=-1;
void push(int value)
{
	if(top==m)
    {
    	printf("Overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		top=top-1;
	}
}
void display()
{	
	printf("Elements of stack are:\n");
    int t=top;//for reverse
    while(t>=0)
	/*int t=0; //for actul
	while(t<=top)*/
	{
		printf("%d\n",stack[t]);
		//t=t+1;
		t=t-1;
	}
}
void main()
{
	int i,value,choice;
	int c;
	do
	{
        printf("Press 1 for Push\n");
		printf("Press 2 for Pop\n");
		printf("Press 3 for Display\n");
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:printf("Enter value in stack:");
				    scanf("%d",&value);
				    push(value);
				    break;
			case 2:pop();
				    break;
			case 3:display();
				    break;
			default:printf("Enter correct choice\n");		  		        
		}
		fflush(stdin);
	    printf("\nPress '0' to continue:");
		scanf(" %d",&c);
	}while(c==0);
getch();	
}
