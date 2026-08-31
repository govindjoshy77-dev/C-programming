#include<stdio.h>
#include<conio.h>
typedef int abel;
void main()
{
	abel i=0,arr[10];
	abel n;
	printf("enter a length of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
