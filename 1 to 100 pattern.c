#include<stdio.h>

main()
{
	int i,j,k,m=1,n=1;
	
	for(i=1; i<=10; i++)
	{
		for(k=1; k<i; k++)
		{
			printf("   ");
		}
		for(j=i; j<=10; j++)
		{
			printf("%d ",m);
			if(m>=1 && m<=9)
			{
				printf(" ");
			}
			m = m + j;
		}
		
		for(j=9; j>=i; j--)
		{
			printf("%d ",m);
			m = m + j;
		}
		n = n + i;
		m = i + n;
		printf("\n");
	}
}
