/* 1. Write a program which accept number from user and 
return difference between summation of even n odd digits.*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iDiff1 = 0, iDiff2 = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iDiff1 = iDiff1 + iDigit;
        }
        else
        {
            iDiff2 = iDiff2 + iDigit;  
        }

        iNo = iNo / 10;
        
    }
    return (iDiff1-iDiff2);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}