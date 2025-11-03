/* 1.Sum of first N even numbers .*/

#include<stdio.h>
int sum_even_numbers(int limit)
{
    int i = 0;
    int iSum = 0;

    for(i = 1;i <= 2 * limit;i++)
    {
        if((i % 2) == 0)
        {
            iSum = iSum + i;    // to reduce time complexity one may have iSum = iSum *(2*i);
        }
    }    

    return iSum;
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n",sum_even_numbers(limit));

    return 0;
}