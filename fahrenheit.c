#include<stdio.h>
#include<conio.h>
void main()
{
	float C;
	int F,a;
	printf("Enter the fahrenheat:");
	scanf("%d",&F);
	a=(F-32);
	C=a/1.8;
	printf("After conversion is : %f Celsius",C);
	
}

