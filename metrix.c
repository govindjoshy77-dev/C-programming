#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,c,r;
	printf("Enter the length of the metrix : ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
