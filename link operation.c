//link operation
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int info;
   struct node *next;

}node;
node *start=NULL;
void insert(node *ptr,int value)
{node *t=malloc(sizeof(node));
 t->info=value;
 t->next=NULL;
 if(start==NULL)
 start=t;
 else
 {
 t->next=ptr->next;
 ptr->next=t;
 }
}
 void delet(int value)
 {
 node *ptr,*pptr;
 pptr=start->next;
 ptr=pptr->next;

 if(start==NULL)
 printf("underflow\n");
 else if(start->info==value)
 start=start->next;
 else
 {
 while(ptr!=NULL)
 {
 if(ptr->info==value)
 pptr->next=ptr->next;
 else
 {
 pptr=ptr;
 ptr=ptr->next;
 }

 }
 }
  free(ptr);
}
void display()
{ node *ptr=start;
 while(ptr!=NULL)
 {
 printf("%d\t",ptr->info);
 ptr=ptr->next;
 }
}

void main()
{
 int value,ch,v;
 node *ptr;
 char c;
 clrscr();
 do
 {
 printf("\tPress 1 to insert \n");
 //printf("\tPress 2 to insert\n");
 printf("\tPress 2 to delete\n");
 printf("\nPress 3 to display\n");

 scanf("\t%d", &ch);
 switch(ch)
 {
  case 1:printf(" \tenter value in linked list\n");
	scanf(" \t%d",&value);
	printf(" \tenter value after which u want to insert in linked list\n");
	scanf(" \t%d",&v);
	ptr=start;
	while(ptr!=NULL)
	{
	if(ptr->info==v)
	insert(ptr,value);
	else
	ptr=ptr->next;
	}
      break;
  case 2: printf(" \tenter value that u want to delete \n");
	  scanf(" \t%d",&v);
  delet(v);break;
  case 3:printf("\t elements in link list are:\n");
	display();break;
  default: printf("enter correct choice \n");
 }
 printf("\tPress Y/y to continue:\n");
 fflush(stdin);
 scanf("\t%c",&c);

 }while(c=='y'||c=='Y');
 getch();
}
