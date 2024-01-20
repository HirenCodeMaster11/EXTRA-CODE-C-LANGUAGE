#include<stdio.h>

void ave(int a[3][3])
{
	int i,j;
	int sum = 0;
	int ave;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum = sum + a[i][j];
		}
	}
	
	ave = sum/9;
	
	printf("Average is : %d",ave);
}
main()
{
	int a[3][3];
	
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	ave(a);
}