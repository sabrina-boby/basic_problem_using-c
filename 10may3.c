//enter a latter to check vowel or consonent
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter :");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("vowel");

    else
    printf("consonent");
    return 0;
}
