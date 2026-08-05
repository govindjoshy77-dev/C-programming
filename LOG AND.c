//logical AND Program

#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 20, b = 100;

    if (!(a > 0 && b > 0))
    {
        printf("Both values are less than 0\n");
    }
    else
    {
        printf("Both values are greater than 0\n");
    }

}
