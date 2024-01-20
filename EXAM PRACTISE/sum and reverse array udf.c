#include<stdio.h>

void rev(int a[])
{
	int i;
	
	for(i=4; i>=0; i--)
	{
		printf("%d ",a[i]);
	}	
}

void sum(int a[])
{
	int sum =0;
	int i;
	
	for(i=0; i<5; i++)
	{
		sum = sum + a[i];
	}
	printf("Sum is : %d\n",sum);
}

main()
{
	int a[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	sum(a);
	rev(a);
}