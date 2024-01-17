#include<stdio.h>
#include<string.h>

void alphabet(char pass[])
{
	int i;
	int check=0;
	int len=strlen(pass);
	for(i=0; i<len; i++)
	{
		if(pass[i]>=65 && pass[i]<=90 && pass[i]>=97 && pass[i]<=122)
		{
			check=1;
		}
		
	}
	if(check==1)
	{
		special(pass);
	}
	else
	{
		printf("strong password");
		main();
	}
	
	
}
void special(char pass[])
{
	int i;
	int check=0;
	int len=strlen(pass);
	for(i=0; i<len; i++)
	{
		if(pass[i]>=33 && pass[i]<=47 || pass[i]>=59 && pass[i]<=64)
		{
			check=1;
		}
		
	}
	if(check==1)
	{
		number(pass); 	
	}
	else
	{
		printf("strong password");
		main();
	}
	
}
void number(char pass[])
{
	int i;
	int check=0;
	int len=strlen(pass);
	for(i=0; i<len; i++)
	{
		if(pass[i]>=48 && pass[i]<=57)
		{
			check=1;
		}
	}
		if(check==1)
		{
			printf("save password"); 	
		}
		else
		{
			printf("strong password");
			main();
		}
}

main()
{
	char pass[50];
	printf("enter the password : ");
	gets(pass);
	alphabet(pass);
}
