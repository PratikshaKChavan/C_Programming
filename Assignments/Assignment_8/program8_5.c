/* 5. Write a program which accept number from user and 
display its table in reverse order*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 10;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iCnt >= 1)
    {
        printf("%d  ",iCnt * iNo);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}