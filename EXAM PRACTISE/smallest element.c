#include<stdio.h>

main()
{
	int a[5];
	int i;
	int sml = a[0];
	
	for(i=0; i<5; i++)
	{
		printf("Enter value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		if(sml>a[i])
		{
			a[i] = sml;
		}
	}
	
	printf("Smallest element is : %d",sml);
}
