#include<stdio.h>
#include<string.h>

main()
{
	char pw[32];
	
	printf("\tPassword Verification\n\n");
	
	start :	
	printf("Create your password : ");
	scanf("%s",&pw);
	
	int len = strlen(pw);
	int i=0,j=0,check=0;; 
	
	if(len>=8 && len<=32)
	{
		for(i=0; i<len; i++)
		{
			if(pw[i]>=65 && pw[i]<=90)
			{
				check = 1;
			}	
		}
		if(check == 1)
		{
			check = 0;
			for(i=0; i<len; i++)
			{
				if(pw[i]>=97 && pw[i]<=122)
				{
					check = 1;
				}	
			}
			if(check == 1)
			{ 
				check = 0;
				for(i=0; i<len; i++)
				{
					if(pw[i]>=32 && pw[i]<=47 || pw[i]>=58 && pw[i]<=64 || pw[i]>=91 && pw[i]<=96 || pw[i]>=123 && pw[i]<=126)
					{
						check = 1;
					}
				}
				if(check == 1)
				{
					check = 0;
					for(i=0; i<len; i++)
					{
						if(pw[i]>=48 && pw[i]<=57)
						{
							check = 1;
						}
					}
					if(check == 1)
					{
						printf("Your password created successfully !!!");
					}
					else
					{
						printf("please minimum 1 digit required !!!\n\n");
						goto start;	
					}
				}
				else
				{
					printf("Please minimum 1 special charecter required!!!\n\n");
					goto start;	
				}	
			}
			else
			{
				printf("Please minimum 1 lower case required!!!\n\n");
				goto start;
			}
		}	
		else
		{
			printf("Please minimum 1 upper case required!!!\n\n");
			goto start;
		}
	}
	else
	{
		printf("Please enter letter between 8 to 32 !!!\n\n");
		goto start;
	}
}