#include<stdio.h>

main()
{
	int a,b,c,d,e,f;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	printf("Enter the value of e : ");
	scanf("%d",&e);
	printf("Enter the value of f : ");
	scanf("%d",&f);
		
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					if(a>f)
					{
						printf("a is max");
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");	
					}
					else
					{
						printf("f is max");
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("d is max");
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}
					else
					{
						printf("f is max");
					}
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					if(c>f)
					{
						printf("f is max");
					}
					else
					{
						printf("c is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}
					else
					{
						printf("f is max");
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("d is max");	
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("f is max");
					}
					else
					{
						printf("e is max");
					}
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					if(b>f)
					{
						printf("b is max");
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}
					else
					{
						printf("f is max");
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("d is max");	
					}	
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}	
					else
					{
						printf("f is max");
					}
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					if(c>f)
					{
						printf("c is max");
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}
					else
					{
						printf("f is max");
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("d is max");
					}
					else
					{
						printf("f is max");
					}
				}
				else
				{
					if(e>f)
					{
						printf("e is max");
					}
					else
					{
						printf("f is max");
					}
				}
			}
		}
	}
}
