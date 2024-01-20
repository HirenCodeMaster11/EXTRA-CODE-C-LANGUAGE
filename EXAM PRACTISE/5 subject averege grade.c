#include<stdio.h>

main()
{
	int phy,math,che,bio,eng;
	float ave,total;
	
	printf("Enter the marks of phy (out of 100) : ");
	scanf("%d",&phy);
	printf("Enter the marks of math (out of 100) : ");
	scanf("%d",&math);
	printf("Enter the marks of che (out of 100) : ");
	scanf("%d",&che);
	printf("Enter the marks of bio (out of 100) : ");
	scanf("%d",&bio);
	printf("Enter the marks of eng (out of 100) : ");
	scanf("%d",&eng);
	printf("\n");
	
	total = phy + math + che + bio + eng;
	ave = total*100 / 500;
	
	printf("Averege mark is : %.2f \n",ave);
	if(ave<=100 && ave>=95)
	{
		printf("A+ Grade");
	}
	else if(ave<=94 && ave>=85)
	{
		printf("A Grade");
	}
	else if(ave<=84 && ave>=70)
	{
		printf("B Grade");
	}
	else if(ave<=69 && ave>=55)
	{
		printf("C Grade");
	}
	if(ave<=54 && ave>=0)
	{
		printf("D Grade");
	}
}