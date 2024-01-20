#include<stdio.h>

main()
{
	int a[5];
	int *ptr = a;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("Even element is : ");
	for(i=0; i<5; i++)
	{
		if(a[i]%2==0)
		{
			*ptr = a[i];
			ptr++;
			printf("%d ",a[i]);
		}
	}
}