#include<stdio.h>
int main()
{
    char a[30],b[10];
    int i=0,len=0,j=0;
    printf("enter your 1st string : ");
    gets(a);
    printf("enter your 2nd string : ");
    gets(b);
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
     while(b[j]!='\0')
    {
       a[len+j]=b[j];
       j++;
    }
    printf("your copid string is : %s",a);
}

