#include<stdio.h>

int sum(int a,int b)
{
	printf("%d + %d = %d",a,b,a+b);
}

int sub(int a,int b)
{
	printf("%d - %d = %d",a,b,a-b);
}

int mul(int a,int b)
{
	printf("%d * %d = %d",a,b,a*b);
}

int div(int a,int b)
{
	printf("%d / %d = %d",a,b,a/b);
}

int rem(int a,int b)
{
	printf("%d %% %d = %d",a,b,a%b);
}
main()
{
	int a,b;
	char op;
	
	printf("Enter the value of operator(+,-,*,/,%) : ");
	scanf("%c",&op);
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+' : sum(a,b);
		break;
		case '-' : sub(a,b);
		break;
		case '*' : mul(a,b);
		break;
		case '/' : div(a,b);
		break;
		case '%' : rem(a,b);
		break;
	}
}