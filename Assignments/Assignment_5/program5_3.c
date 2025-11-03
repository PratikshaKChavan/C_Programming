// 3. Check Leap Year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4) == 0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}

int main()
{
    int yr;

    printf("Enter year : ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}