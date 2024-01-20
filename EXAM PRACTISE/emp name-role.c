#include<stdio.h>

struct emp
{
	char name[20];
	char role[20];
};
main()
{
	FILE *fp;
	
	fp = fopen("emp.txt","w");
	
	char name[20];
	char role[20];
	
	int n;
	int i;
	
	printf("Enter the employee number : ");
	scanf("%d",&n);
	
	struct emp emp_det[n];
	
	for(i=0; i<1; i++)
	{
		printf("Input Employee %d Details !!",i+1);
		printf("\n");
		printf("Enter the emp name : ");
		scanf(" %[^\n]s",name);
		strcpy(emp_det[i].name,name);
		
		printf("Enter the emp role : ");
		scanf(" %[^\n]s",role);
		strcpy(emp_det[i].role,role);
		
		printf("\n\n");
		
		fprintf(fp,"Employee %d Details is",i+1);
		
		fprintf(fp,"\n");
		fprintf(fp,"Employee name is : %s\n",emp_det[i].name);
		fprintf(fp,"Employee role is : %s\n",emp_det[i].role);
	}
}