// 1. Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven( int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 1;
    int iCount = 0;

    while(iCount < iNo)
    {
        printf("%d  ", 2*i);
        i++;
        iCount++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}