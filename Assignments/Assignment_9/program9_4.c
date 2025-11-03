/* 3. Write a program to find odd factorial
of given number.*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1;iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iAns = iAns * iCnt; 
        } 
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}