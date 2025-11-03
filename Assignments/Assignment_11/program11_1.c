/* 1. Accept a program which acept range from user
and display all the numbers between that range.*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        printf("%d  ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter ending point\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}