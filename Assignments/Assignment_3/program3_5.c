// 5.Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cVariable)
{
    if(cVariable == 'a'|| cVariable == 'e'|| cVariable == 'i'|| cVariable == 'o'|| cVariable == 'u'||
       cVariable == 'A'|| cVariable == 'E'|| cVariable == 'I'||cVariable == 'O'||cVariable == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}