/* 3. Write a program to find factorial of given number.*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}