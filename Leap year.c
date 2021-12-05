#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf(" %d=Leap year:",a);
	}
	else
	{
		printf("%d=Not leap year",a);
	}
}
