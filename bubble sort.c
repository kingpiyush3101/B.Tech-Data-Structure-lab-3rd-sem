// bubble sort
#include <stdio.h>
#include <conio.h>
#define MAX 20
main()
{
	int arr[MAX],i,j,temp,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Unsorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 0; i < n-1 ; i++)
	{
	
		for (j = 0; j <n-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	printf("Sorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
    }}


