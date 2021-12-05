#include<stdio.h>
main()
{
	int number;
	printf ("Enter the value of numbers:");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			{
				int number2;
				printf("Enter the number2\n");
				scanf("%d",&number2);
				switch(number2)
				{
					case 1:
						{
							int a,b,c;
							printf("Enter two numbers:");
							scanf("%d%d",&a,&b);
							c=a+b;
							printf("%d",c);
							break;
							
							case 2:
								{
									int a,b,c;
									printf("Enter two numers:");
									scanf("%d%d",&a,&b);
									c=a-b;
									printf("Subtraction=%d",c);
									break;
									
									case 3:
										{
										int a,b,c;
										printf("Enter two numbers:");
										scanf("%d%d",&a,&b);
										c=a*b;
										printf("Multiplication=%d",c);
										break;
										
										case 4:
											{
												int a,b,c;
												printf("Enter two numbers:");
												scanf("%d%d",&a,&b);
												c=a/b;
												printf("Division=%d",c);
												break;
												
												case 5:
													{
														int a,b,c;
														printf("Enter the two numbers:");
														scanf("%d%d",&a,&b);
														c=a%b;
														printf("Remender=%d",c);
														break;
													}
											}
									}
								}
						}
					}
				}
				break;
	}
	}
	
