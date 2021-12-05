#include<stdio.h>
main()
{
	int p,r,t;
	float si;
	printf("Enter the value of p:");
	scanf("%d",&p);
	printf("Enter the value of r:");
	scanf("%d",&r);
	printf("Enter the value of t:");
	scanf("%d",&t);
	si=(float)(p*r*t)/100;
	printf("Simple Interest p,r and t=%f",si);
}
