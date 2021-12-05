#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	int max=(a>b)?(a>c)?(a>d)?a:d:(c>b)?(c>d)?c:d:(b>c)?(b>d)?b:d;
	printf("%d",max);
}

