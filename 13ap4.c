#include<stdio.h>
int main()
{
    char a[30],b[10];
    int i=0,len=0,j,d;
    printf("enter your 1st string : ");
    gets(a);

    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("revers string is : %s",b);

    d=strcmp(a,b);
    if(d==0)
    {
        printf("\npalindrom");
    }
    else
        printf("\nnot palindrom");
}
