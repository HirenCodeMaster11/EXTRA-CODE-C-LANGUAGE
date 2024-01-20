#include<stdio.h>

void rev(int x)
{
	int rev=0;
	
	while(x>0)
	{
		rev=rev*10 + (x%10);
		x=x/10;
	}
	printf("Reverse num is : %d",rev);
}
main()
{
	int x;
	
	printf("Enter the num : ");
	scanf("%d",&x);

	rev(x);
}
