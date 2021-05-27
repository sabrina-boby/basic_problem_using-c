//capital small
#include<stdio.h>
int main()
{
    int cha;
    printf("enter any charecter: ");
    scanf("%c",&cha);

    if('A'<=cha && 'Z'>=cha)
    printf("capital letter");

    else if('a'<=cha && 'z'>=cha)
    printf("small letter");

    else
    printf("its not a letter");

    return 0;

}
