// 5. Write a program which accept number from user and return difference between summation of all factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0, iSum1 = 0, iSum2 = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iSum2 = iSum2 + iCnt;
        }

        iDiff = iSum1 - iSum2;
    }

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}