// 4. Write a program which accept number from user and return summation of all its non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAdd = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iAdd = iAdd + iCnt;
        }
    }

    return iAdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}