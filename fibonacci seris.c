#include<stdio.h>

main()
{
	int fd = 0;
	int sd = 1;
	int td;
	int n,i;
	
	printf("Enter the size ; ");
	scanf("%d",&n);
	
	printf("%d ",fd);
	printf("%d ",sd);
		
	for(i=3; i<=n; i++)
	{
		fd=sd;
		sd=td;
		td = fd + sd;
		printf("%d ",td);
	}
}
