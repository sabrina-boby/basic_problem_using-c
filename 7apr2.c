//190
#include<stdio.h>
int main()
{
    char a[]="sabrina", b[]="sabrina";
    int d;
    d=strcmp(a,b);
    if(d==0)
    {
        printf("equal");
    }

    else
    {
        printf("not equal");
    }
}
