//recursive function to solve tower of hanoi puzzle
#include<stdio.h>
#include<conio.h> 
void tower(int n,char A,char C,char B) 
{ 
    if(n==1) 
    { 
        printf("\n Move disk 1 from rod %c to rod %c",A,C); 
        return;
    }
	else 
    {
	    tower(n-1,A,B,C);
    	printf("\n Move disk %d from rod %c to rod %c",n,A,C); 
    	tower(n-1,B,C,A);
	}
} 
void main() 
{   
	int n;
    printf("Tower of Hanoi\n");
    printf("Enter the no. dics:");
    scanf("%d",&n); 
    tower(n,'A','C','B'); 
return 0;
}
