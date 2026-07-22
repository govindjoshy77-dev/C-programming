#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter a number to check whether it is odd or even:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The number %d is even",a);
	}
	else
	{
		printf("The number %d is odd",a);
	}
}
