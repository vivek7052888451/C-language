#include<stdio.h>
main()
{
	int a,b,max;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	max=(a>b)?a:b;
	printf("a=%d and b=%d max=%d",a,b,max);
}
