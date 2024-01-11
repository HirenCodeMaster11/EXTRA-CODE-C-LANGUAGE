#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",a + i);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d\n",i,*(a + i));
	}
}