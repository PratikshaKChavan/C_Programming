/* 1. Write a program which accept number from user
 and display below pattern*/

 #include<stdio.h>

 void Display(int iNo)
 {
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 2*iNo;iCnt++)
    {
        if(iCnt <= iNo )
        {
            printf("*   ");
        }
        else if(iCnt >= iNo)
        {
            printf("  #  ");
        }
    }

 
 }

 int main()
 {
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
 }

 //Time Complexity : O(2N)