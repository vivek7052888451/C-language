#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	int max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("a=%d ,b=%d and c=%d Max number is=%d",a,b,c,max);
}
