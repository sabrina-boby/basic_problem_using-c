#include<stdio.h>
int main()
{
    char a[10],b[10];
    int c;
    printf("enter your 1st string : ");
    gets(a);
    printf("enter your 2nd string : ");
    gets(b);
    c=strcmp(a,b);
    if (c==0)
    {
        printf("they are equal");
    }
    else
        printf("they are not equal");

}
