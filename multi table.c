#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,pro;
	printf("Enter the number you want to check the multiplication table of :");
	scanf("%d",&n);
	printf("****** Multiplication Table of %d*******",n);
	for(i=1;i<=10;i++)
	{
		pro=i*n;
		printf("\n%d X %d = %d",i,n,pro);
	}
}
