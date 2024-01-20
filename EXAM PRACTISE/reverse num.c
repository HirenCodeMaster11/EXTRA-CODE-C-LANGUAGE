#include<stdio.h>

void rev(int x)
{
	int y;
	
	while(x>0)
	{
		y=x%10;
		printf("%d",y);
		x=x/10;
	}
}
main()
{
	int x;
	
	printf("Enter the num : ");
	scanf("%d",&x);

	rev(x);
}
