#include<stdio.h>

//13. Write a program in C to insert the values in the array (sorted list).

main()
{
	int n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int i,j,ace,ins;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the insert value : ");
	scanf("%d",&ins);
	
	a[n] = ins;
	
	for(i=0; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[j]<a[i])
			{
				ace = a[i];
				a[i] = a[j];
				a[j] = ace;
			}
		}
	}
	
	for(i=0; i<=n; i++)
	{
		printf("%d ",a[i]);
	}
}