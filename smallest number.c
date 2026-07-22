#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers to check the smallest among them:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is the smallest among them",a);
		}
		else
		{
			printf("%d is the smallest",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is the smallest",b);
		}
		else
		{
			printf("%d is the smallest",c);
		}
	}
}
