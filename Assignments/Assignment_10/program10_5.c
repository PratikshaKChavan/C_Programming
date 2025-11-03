/* 5. Write a program which accept area in square feet
and covert it into square meter.*/

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSqMeter = 0.0;

    dSqMeter = iNo * 0.0929;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Please enter area in square feet: \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf.",dRet);

    return 0;
}