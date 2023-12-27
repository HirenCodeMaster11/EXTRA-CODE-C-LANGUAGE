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
}