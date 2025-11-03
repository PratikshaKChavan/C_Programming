/* 1.Sum of first N natural numbers .*/

#include<stdio.h>
int sum_natural_numbers(int limit)
{
    int iSum = 0;

    iSum = (limit * (limit -1)) / 2;

    return iSum;
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}