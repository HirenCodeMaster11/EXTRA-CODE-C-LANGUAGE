#include<stdio.h>
#include<string.h>

main()
{
	char mail[32];
	char per[10] = "@gmal.com";
	
	start :
	
	printf("\tGmail Verification\n\n");	
	printf("Create your email : ");
	scanf("%s",&mail);
	
	int len = strlen(mail);
	int i=0,j=0,check=0;; 
	
	if(len>=12 && len<=32)
	{
		for(i=0; i<len; i++)
		{
			if(mail[i]>=65 && mail[i]<=90)
			{
				check = 1;
			}	
		}
		if(check != 1)
		{
			check = 0;
			for(i=0; i<len-10; i++)
			{
				if(mail[i]>=32 && mail[i]<=47 || mail[i]>=58 && mail[i]<=64 || mail[i]>=91 && mail[i]<=96 || mail[i]>=123 && mail[i]<=126)
				{
					check = 1;
				}	
			}
			if(check != 1)
			{
				check = 0;
				for(i=len-10; i<32; i++)
				{
					if(mail[i] == per[j])
					{
						check = 1;
					}
					j++;	
				}
				if(check == 1)
				{
					printf("Your gmail is created successfully !!!\n\n");
				}
				else
				{
					printf("@gmail.com format mistake !!!\n\n");
					goto start;
				}
			}
			else
			{
				printf("Please don'n enter special charecter !!!\n\n");
				goto start;
			}
		}
		else
		{
			printf("Please gmail in lower case !!!\n\n");
			goto start;
		}
	}
	else
	{
		printf("Please enter letter between 12 to 32 !!!\n\n");
		goto start;
	}
	
	printf("\n\n");
	
	char pw[32];
	
	printf("\tPassword Verification\n\n");
	
	start1 :	
	printf("Create your password : ");
	scanf("%s",&pw);
	
	int len2 = strlen(pw);
	int a=0,b=0,check1=0;; 
	
	if(len2>=8 && len2<=32)
	{
		for(a=0; a<len2; a++)
		{
			if(pw[a]>=65 && pw[a]<=90)
			{
				check1 = 1;
			}	
		}
		if(check1 == 1)
		{
			check1 = 0;
			for(a=0; a<len2; a++)
			{
				if(pw[a]>=97 && pw[a]<=122)
				{
					check1 = 1;
				}	
			}
			if(check1 == 1)
			{ 
				check1 = 0;
				for(a=0; a<len2; a++)
				{
					if(pw[a]>=32 && pw[a]<=47 || pw[a]>=58 && pw[a]<=64 || pw[a]>=91 && pw[a]<=96 || pw[a]>=123 && pw[a]<=126)
					{
						check1 = 1;
					}
				}
				if(check1 == 1)
				{
					check1 = 0;
					for(a=0; a<len2; a++)
					{
						if(pw[a]>=48 && pw[a]<=57)
						{
							check1 = 1;
						}
					}
					if(check1 == 1)
					{
						printf("Your password created successfully !!!");
					}
					else
					{
						printf("please minimum 1 digit required !!!\n\n");
						goto start1;	
					}
				}
				else
				{
					printf("Please minimum 1 special charecter required!!!\n\n");
					goto start1;	
				}	
			}
			else
			{
				printf("Please minimum 1 lower case required!!!\n\n");
				goto start1;
			}
		}	
		else
		{
			printf("Please minimum 1 upper case required!!!\n\n");
			goto start1;
		}
	}
	else
	{
		printf("Please enter letter between 8 to 32 !!!\n\n");
		goto start1;
	}
}