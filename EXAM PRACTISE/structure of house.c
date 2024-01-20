#include<stdio.h>

struct house
{
	int room_quantity,established_year;
	char city[20];
}
main()
{
	char city[20];
	
	int n;
	
	printf("Enter the your house quantity : ");
	scanf("%d",&n);
	
	struct  house house_num[n];
	
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("House %d Information !!!\n\n",i+1);
		
		printf("Enter the room_quantity : ");
		scanf("%d",&house_num[i].room_quantity);
		
		printf("Enter the established_year : ");
		scanf("%d",&house_num[i].established_year);
		
		printf("Enter the city : ");
		scanf(" %[^\n]s",&city);
		strcpy(house_num[i].city,city);
	
		printf("\n\n");
			
		printf("House %d Information is below !!!\n\n",i+1);
		
		printf("House room_quantity is : %d\n",house_num[i].room_quantity);
		
		printf("House established_year is : %d\n",house_num[i].established_year);
		
		printf("House city is : %s\n",house_num[i].city);
		
		printf("\n\n");
	}
	
}
