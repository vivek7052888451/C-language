#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a==0)
		printf("number is equals");
	else if(a>0)
		printf("Positive number");
	else
		printf("nagetive number");
}
