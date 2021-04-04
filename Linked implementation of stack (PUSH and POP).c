//Linked implementation of stack [ PUSH  and POP operation]
#include<conio.h>
#include<stdio.h>
typedef struct node
{
  int info;
  struct node *next;
}node;
void main()
{
 node *start=NULL,*ptr,*t;
 int n,i;
 printf("enter total no.of node in linked list\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 t=(node*)malloc(sizeof(node));
 printf("enter value in linked list\n");
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
