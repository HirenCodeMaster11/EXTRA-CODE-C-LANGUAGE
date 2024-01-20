#include<stdio.h>

main()
{
	int i,j;
	int k=11;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j<=5; j++)
		{
			printf(" %d ",k);
			k++;
		}
		printf("\n");
	}
}