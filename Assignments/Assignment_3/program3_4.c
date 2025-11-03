// 4. Accept one character from user and convert case of tht character

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);                  //ASCII a == 97
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);                  //ASCII A == 65
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}