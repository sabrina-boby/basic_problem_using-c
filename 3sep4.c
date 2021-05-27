//vowel/consonent
#include<stdio.h>
int main()
{
    char letter;
    printf("enter any letter:");
    scanf("%c",&letter);

    switch(letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;

    default:
        printf("consonent");
        break;



    }



    return 0;
}
