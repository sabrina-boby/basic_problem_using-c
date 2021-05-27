//str lenth
#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    printf("enter your string : ");
    scanf("%s",&a);

    while(a[i]!='\0')
    {
        i++;
    }
    printf("char number is :  %d",i);
}
