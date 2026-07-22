#include<stdio.h>
#include<conio.h>
void main()
{
	float I,P,r,n;
	printf("Enter The principle amount:");
	scanf("%f",&P);
	printf("Enter the Rate of interest:");
	scanf("%f",&r);
	printf("Enter the number of years:");
	scanf("%f",&n);
	I=(P*n*r)/100;
	printf("Total interest is: %f",I);
}
