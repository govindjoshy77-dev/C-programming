#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,gr;
	float mark;
	int m1,m2,m3;
	char name[10];
	printf("Enter the Name of the Student:");
	scanf("%s",&name);
	printf("Enter the Roll.No of the student:");
	scanf("%d",&rno);
	printf("Enter the mark of three subjects out of 100:");
	scanf("%d%d%d",&m1,&m2,&m3);
	mark=(m1+m2+m3)/3;
	if(mark<=100)
	{
	if(mark>=95)
	{
		printf("Name : %s",name);
		printf("\n Roll Number : %d",rno);
		printf("\n total mark is : %f",mark);
		printf("\n You got A+ grade");
	}
	
		else if(90<=mark && mark<95)
	{
		printf("Name : %s",name);
		printf("\n Roll Number : %d",rno);
		printf("\n Total mark is %f",mark);
		printf("\n You got A grade");
	}
	
	else if(70<=mark && mark<=80)
	{
		printf("Name : %s",name);
		printf("\n Roll Number : %d",rno);
		printf("\n Total mark is %f",mark);
		printf("\n You got B+ grade");
	}
	
		else if(60<=mark && mark<70)
	{
		printf("Name : %s",name);
		printf("\n Roll Number : %d",rno);
		printf("\n Total mark is %f",mark);
		printf("\n You got B grade");
	}
	else if(mark<=60)
	{
		printf("Name : %s",name);
		printf("\n Ro ll Number : %d",rno);
		printf("\n Total mark is %f",mark);
		printf("\n You failed !");
	}
	else
		{	
		printf("Invalid Entry");
		}
}
else
{
	printf("Could not fetch The mark Please Try again!");
}
		
}
