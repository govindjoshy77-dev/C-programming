//Program to check whether the year is a leap Year or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)
	{
		printf("The year %d is a Leap Year : ",year);
	}
	else
	{
		printf("The year %d is not a Leap Year : ",year);

	}
}
