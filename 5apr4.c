//string-4
#include<stdio.h>
int main()
{
    char a[]="sabrina";
    int i=0,len=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    printf("lenth = %d",len);
}
