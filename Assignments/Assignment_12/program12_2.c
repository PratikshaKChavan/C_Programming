/* Count total number of factors.*/

#include<stdio.h>

int Count_factors(int number)
{
    int iCnt = 0;
    int ifactors = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1;iCnt <= number ;iCnt++)
    {
        if((number % iCnt) == 0)
        {
            ifactors++;
        }
    }

    return ifactors;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", Count_factors(number));

    return 0;
}