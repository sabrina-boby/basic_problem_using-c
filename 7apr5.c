#include<stdio.h>
int main()
{
    char str1[30]="sabrina", str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=len-1; i>=0; i--)
    {
        for(j=0; str2[j]!='\0'; j++)
        {
            str2[j]=str1[i];
        }
        str2[j]='\0';
    }
    printf("%s\n",str1);
    printf("%s",str2);
}

