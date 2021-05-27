//find capital letter & small letter to using if else
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter :");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("it is small letter");

    else if(ch>'A' && ch<='Z')
        printf("it is capital letter");


    else
        printf("it is no letter");

    getch ();

}
