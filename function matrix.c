#include<stdio.h>
#include<conio.h>
int print(int a[10][10],int b[10][10],int r,int c);
int read(int a[10][10],int b[10][10],int r,int c);
int sum(int a[10][10],int b[10][10],int r,int c);
void main()
{
	int a[10][10],b[10][10],i,j,c,r,add;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&r,&c);
	read(a,b,r,c);
	print(a,b,r,c);
	sum(a,b,r,c);
		
}
int read(int a[10][10],int b[10][10],int r,int c)
{
	int i,j;

	printf("Enter the elements of First Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of Second Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}

int print(int a[10][10],int b[10][10],int r,int c)
{
	int i,j;
	printf("****** First Matrix ******\n");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("****** Second Matrix ******\n");
		printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

int sum(int a[10][10],int b[10][10],int c,int r)
{
	int s[10][10],j,i;
	printf("****** Sum is ******\n");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
