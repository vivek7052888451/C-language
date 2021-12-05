#include<stdio.h>
main()
{
	int Hindi,Math,Science,Drawing,English;
	printf("Enter the Hindi marks=");
	scanf("%d",&Hindi);
	printf("Enter the Math marks=");
	scanf("%d",&Math);
	printf("Enter the Science marsk=");
	scanf("%d",&Science);
	printf("Enter the Drawing marks=");
	scanf("%d",&Drawing);
	printf("Enter the English marks=");
	scanf("%d",&English);
	int total=Hindi+Math+Science+Drawing+English;
	float per=total/5;
	printf("\n----------------Student Marksheet--------------------------\n");
	printf("total=%d \n percentage=%f\n",total,per);
	if(per>=60)
		printf("Pass First Divition");
	else if(per>=45)
		printf("Pass Second Divition");
	else if(per>=33)
		printf("pass Third Divition");
	else
		printf("Fail");

}
