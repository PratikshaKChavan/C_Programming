/* Sum of all factors of a number.*/

#include<stdio.h>

int Sum_of_factors(int number)
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
            ifactors =ifactors + iCnt;
        }
    }

    return ifactors;
}

int main(void)                         // without arguments
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", Sum_of_factors(number));

    return 0;
}