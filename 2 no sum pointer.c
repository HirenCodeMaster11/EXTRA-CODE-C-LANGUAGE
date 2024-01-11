#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	int *ptr = &a;
	int *ptr2 = &b;
	int sum = 0;
	
	sum = *ptr + *ptr2;
	
	printf("Sum is %d",sum);
}