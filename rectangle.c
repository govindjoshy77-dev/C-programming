#include<stdio.h>
#include<conio.h>
void main()
{
	int Area,Peri,l,b;
	printf("Enter the length and breadth of the rectangle:");
	scanf("%d%d",&l,&b);
	Area=l*b;
	Peri=2*(l+b);
	printf("The area of the rectangle is : %d",Area);
	printf("\n The perimeter of the rectangle is : %d",Peri);

}
