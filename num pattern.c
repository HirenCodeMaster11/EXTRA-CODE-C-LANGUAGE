#include<stdio.h>

main()
{
	int i,j,k,l,m;
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(m=i-1; m>=1; m--)
		{
			printf("%d",m);
		}
		printf("\n");
	}
}