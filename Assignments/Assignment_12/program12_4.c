/* Sum of all even factors of a number(Excluding the number itself).*/

#include<stdio.h>

int Sum_of_factors(int number)
{
    int iCnt = 0;
    int ifactors = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1;iCnt <= number/2 ;iCnt++)
    {
        if((number % iCnt) == 0 && ((iCnt  % 2) == 0))
        {
            ifactors =ifactors + iCnt;
        }
    }

    return ifactors;
}

int main()                         
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", Sum_of_factors(number));

    return 0;
}