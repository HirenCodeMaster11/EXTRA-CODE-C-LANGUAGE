#include<stdio.h>

main()
{
	char a[50];
	
	printf("Enter the string : ");
	gets(a);
	
	int len = strlen(a);
	int i,j,ace;
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i]>a[j])
			{
				ace = a[i];
				a[i] = a[j];
				a[j] = ace;
			}
		}
		printf("%c",a[i]);
	}
	
} 
