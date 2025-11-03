/* 1. Print all numbers from 1 to N .*/

#include<stdio.h>
void print_numbers(int limit)
{
    int i = 0;

    for(i = 1; i <= limit; i++)
    {
        printf("%d  ", i);
    }
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}