#include<stdio.h>
//1. Write a C program to print all negative elements in an array.
main()
{
	int n;
	
	printf("Enter the value of Array : ");
	scanf("%d",&n);

	int a[n][n];
	int b[n][n];
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("\n");
	
	printf("Transpose Matrix : \n"); 
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",b[i][j]); 
		}
		printf("\n");
	}
}