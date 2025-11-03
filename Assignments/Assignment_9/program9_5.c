/* 3. Write a program which returns difference between even 
factorial and odd factorial of given number.*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1,iFact2 = 1,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1;iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iFact1 = iFact1 * iCnt; 
        }
        else
        {
            iFact2 = iFact2 * iCnt; 
        } 
    }

    return iAns = iFact2 - iFact1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}