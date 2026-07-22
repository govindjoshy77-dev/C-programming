#include<stdio.h>
#include<conio.h>
void main()
{
	int a,m,n,o,p,q;
	printf("Enter a Three Digit Number:");
	scanf("%d",&a);
	m=a%10;
	n=a/10;
	p=n%10;
	q=n/10;
	o=m+n+p+q;
	printf("the sum of three digit number %d is : %d",a,o);
}
