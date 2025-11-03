/* 1. Write a program which accept number from user and if number less than 
50 then print small,if greater than 50 and less than 100 then print medium,
 if greater than 100 print large.*/

#include<stdio.h>

void Number(int iNo)
{
    if( iNo < 50)
    {
        printf("Small");
    }
    else if(50 < iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}