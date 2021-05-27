#include<stdio.h>
int main()
{
    char a[11],b[11];
    int i=0,c,j=0;
    printf("enter your 1st string : ");
    gets(a);
    printf("enter your 2nd string : ");
    gets(b);
    c=strlen(a);

    while(a[j]!='\0')
    {
       a[c+j]=b[j];
       j++;
    }

    printf("your copid string is : %s",a);

}
