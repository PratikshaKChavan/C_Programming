/* 1. Write a program which accept radius of circle from
user and calculate its area*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf square units.",dRet);

    return 0;
}