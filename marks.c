#include<stdio.h>
main()
{
	int hindi,english,math, bio;
	printf("enter hindi mark  ");
	scanf("%d",&hindi);
	printf("enter english mark  ");
	scanf("%d",&english);
	printf("enter math mark  ");
	scanf("%d",&math);
	printf("enter bio number  ");
	scanf("%d",&bio);
	int total;
	total=hindi+english+math+bio;
	printf("\n total mark=%d",total);
	float per;
	per=total/4;
	printf("percentage=%f",per);
	if(per>90)
	printf("topper");
	else if(per>70)
	printf("first");
	else if(per>60)
	printf("second");
	else if(per>50)
	printf("third");	
}
	
