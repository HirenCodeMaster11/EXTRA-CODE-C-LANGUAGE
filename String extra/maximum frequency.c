#include<stdio.h>

main()
{
	char a[50];
	
	printf("Enter the string : ");
	gets(a);
	
	int len = strlen(a);
	int i,j,count = 1;
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{
				printf("%c ->",a[i]);
				count++;
				
			}
		}
		
	}
	printf(" %d",count);
} 
