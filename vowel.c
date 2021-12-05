#include<stdio.h>
main()
{
	char a;
	printf("Enter a charecter:");
	scanf("%c",&a);
	int b=a;
	if((b>=65 && b<=90)||(b>=97 && b<=122))
	{
	if((a=='A' || a=='E' || a=='I' || a=='O'|| a=='U'|| a=='a'|| a=='e'|| a=='i' || a=='o'||a=='u'))
	{
		printf("VOWEL Charecter");
	}
	else
	{
		printf("Consonent charecter");
	}	
	}
	else
	{
		printf("Invalid charecter");
	}
}

