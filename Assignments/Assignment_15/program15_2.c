/* 1. Write a program which accept number from 
user and return the count of odd digits.*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    while(iNo != 0)
    {
        if(((iDigit = iNo % 10) % 2) != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
        
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}