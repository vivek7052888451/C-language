#include<stdio.h>
main()
{
	char a;
	printf("Enter a charecter:");
	scanf("%c",&a);
	int b=a;
	if(b>=65 && b<=90)
	{
		printf("Upper case");
	}
	if(b>=97 && b<=122)
	{
		printf("Lower case");
	}
}
