#include<stdio.h>

main()
{
	int n,x = 2;
	
	printf("Enter the n : ");
	scanf("%d",&n);
	printf("Enter the x : ");
	scanf("%d",&x);
	
	while(x<=n)
	{     
		printf("1/%d ",x);
		x*=2;
	}   
} 