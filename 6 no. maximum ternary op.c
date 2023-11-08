#include<stdio.h>

main()
{
	int a,b,c,d,e,f;
	
	printf("Enter the value a,b,c,d,e,f : ");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	
	(a>b)?(a>c)?(a>d)?(a>e)?(a>f)? printf("a is max"):printf("f is max") :(e>f)?printf("e is max") :printf("f is max"):
	(d>e)?(d>f)? printf("d is max"): printf("f is max"): (e>f)?printf("e is max") :printf("f is max") : (c>d)?(c>e)?(c>f)?printf("c is max"):
	printf("f is max") :(e>f)? printf("e is max"): printf("f is max"): (d>e)?(d>f)? printf("d is max"):printf("f is max") : (e>f)? printf("e is max"):
	printf("f is max") :(b>c)?(b>d)?(b>e)?(b>f)? printf("b is max"): printf("f is max"): (e>f)? printf("e is max"): printf("f is max"): (d>e)?(d>f)?printf("d is max"):
	printf("f is max") :(e>f)?printf("e is max") : printf("f is max"):(c>d)?(c>e)?(c>f)? printf("c is max"): printf("f is max"):(e>f)?printf("e is max"):printf("f is max"):
	(d>e)?(d>f)? printf("d is max"): printf("f is max"):(e>f)? printf("e is max"):printf("f is max");
}