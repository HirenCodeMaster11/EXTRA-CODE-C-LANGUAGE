#include<stdio.h>

void cal()
{
	char op;
	int a,b;
	
	printf("Enter the opretor (+,-,*,/,%) : ");
	scanf(" %c",&op);
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+' : printf("%d + %d = %d",a,b,a+b);
		break;
		case '-' : printf("%d - %d = %d",a,b,a-b);
		break;
		case '*' : printf("%d * %d = %d",a,b,a*b);
		break;
		case '/' : printf("%d / %d = %d",a,b,a/b);
		break;
		case '%' : printf("%d %% %d = %d",a,b,a%b);
		break;
		default : printf("Enter the valid case");
	}
	printf("\n");
	cal();
}

main()
{
	cal();
}