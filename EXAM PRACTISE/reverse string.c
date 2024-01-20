#include<stdio.h>

void rev(char a[])
{
	int rev = 0;
	int i;
	
	for(i=0; i<10; i++)
	{
		rev++;
	}
	
	printf("Reverse string is : ");
	
	for(i=rev; i>=0; i--)
	{
		printf("%c",a[i]);         
	}
}
main()
{
	char a[10];
	
	printf("Enter the string : ");
	scanf("%s",a);
	
	rev(a);
}
