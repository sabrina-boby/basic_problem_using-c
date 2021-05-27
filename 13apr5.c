#include<stdio.h>
int main()
{
    char a[30],b[20],c[20];
    int i;

    printf("enter your 1st string : ");
    gets(a);
    printf("enter your 2nd string : ");
    gets(b);

    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);


    printf("string a is : %s\n",a);
    printf("string b is : %s",b);
}
