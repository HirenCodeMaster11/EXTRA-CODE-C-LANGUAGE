#include<stdio.h>

void ave(int a[])
{
	int i;
	
	printf("Odd element is : ");
	for(i=0; i<5; i++)
	{
		if(a[i]%2==1)
		{
			printf("%d ",a[i]);
		}
	}
	
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
	printf("\n");
	
	ave(a);
}