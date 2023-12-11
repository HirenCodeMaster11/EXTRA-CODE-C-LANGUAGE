#include<stdio.h>

//13. Write a program in C to insert the values in the array (sorted list).

main()
{
	int n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int i,j,ace,del;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the delete value : ");
	scanf("%d",&del);
    	
 	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n-1; j++)
		{
			if(a[j]<a[i])
			{
				ace = a[i];
				a[i] = a[j];
				a[j] = ace;
			}
		}
	}
	for(i=0; i<n; i++)
	{    
		if(a[i] == del)
		{
			continue;	
		}   
		printf("%d ",a[i]);
	}
}