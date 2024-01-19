#include<stdio.h>
#include<string.h>

void capalphabet(char mail[],int len)
{
	int i;
	int check=0;
	for(i=0; i<len; i++)
	{
		if(mail[i]>=65 && mail[i]<=90)
		{
			check=1;
		}
		
	}
	if(check!=1)
	{
		lowalpha(mail,len);
	}
	else
	{
		printf("Capital letter is not allow in mail !!");
		main();
	}
	
	
}
void lowalpha(char mail[],int len)
{
	int i;
	int check=0;
	for(i=0; i<len; i++)
	{
		if(mail[i]>=97 && mail[i]<=122)
		{
			check=1;
		}
		
	}
	if(check==1)
	{
		special(mail,len);
	}
	else
	{
		printf("Small letter is compalsory in mail !!");
		main();
	}
	
	
}
void special(char mail[],int len)
{
	int i;
	int check=0;
	for(i=0; i<len-10; i++)
	{
		if(mail[i]>=33 && mail[i]<=47 || mail[i]>=59 && mail[i]<=64)
		{
			check=1;
		}
		
	}
	if(check!=1)
	{
		formet(mail,len); 	
	}
	else
	{
		printf("Special letter is not allow in mail !!");
		main();
	}
	
}
void formet(char mail[],int len)
{
	int i,j=0;
	int check=0;
	char temp[10] = "@gmail.com";
	
	for(i=len-10; i<len; i++)
	{
		if(mail[i] == temp[j])
		{
			check=1;
		}
		j++;
	}
	if(check==1)
	{
		printf("your mail is create !!");
	}
	else
	{
		printf("@gmail.com formet is not right !!");
		main();
	}
}
main()
{
	printf("\n\n");
	char mail[32];
	printf("enter the gmail : ");
	gets(mail);
	int len = strlen(mail);
	capalphabet(mail,len);
}