//structure
#include<stdio.h>
#include<conio.h>
typedef struct student
{
	char n[10];
	int r;
}s;
void main()
{
	int i;
	s s1[5];
	printf("enter name & roll no.\n");
	for(i=0;i<5;i++)
	{
		gets(s1[i].n);
		scanf("%d",&s1[i].r);
	}
	printf("entered details are:\n");
	for(i=0;i<5;i++)
	{
		puts(s1[i].n);
		printf("%d",s1[i].r);
		printf("\n");
	}
getch();	
}
