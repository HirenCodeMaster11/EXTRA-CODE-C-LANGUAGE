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
	
	int r,c;
	int sumr=0,sumc=0;
	
	printf("Enter the row num. : ");
	scanf("%d",&r);
	
	printf("Given row element is : \n");
	if(r>=0 && r<n)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",a[r][j]);
			sumr = sumr + a[r][j];
		}
		printf("\n");
	}
	
	printf("sum of given row : %d\n",sumr);
	
	printf("\n\n");
	
	printf("Enter the column num. : ");
	scanf("%d",&c);
	
	printf("Given column element is : \n");	
	
	if(c>=0 && c<n)
	{
		for(i=0; i<n; i++)
		{
			printf("%d",a[i][c]);
			sumc = sumc + a[i][c];
		}
		printf("\n");
	}
	
	printf("sum of given column : %d",sumc);

}