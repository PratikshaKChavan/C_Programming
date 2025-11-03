/* 4. Write a program which accept temperature in Fahrenheit 
and covert it into celsius. */

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32)*(5.0 / 9.0 );

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature into Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf .",dRet);

    return 0;
}

