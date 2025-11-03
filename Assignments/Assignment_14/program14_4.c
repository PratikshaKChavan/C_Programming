/* 1. Write a program which accept number from 
user and count frequncy of 2 in it*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    while(iNo != 0)
    {
        if((iDigit = iNo % 10) == 4)
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

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}