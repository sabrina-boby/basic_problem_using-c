#include<stdio.h>
int main()
{
    char str1[30]="madam", str2[30];
    int i=0,len=0,j,d;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; j++,i--)
    {
        str2[j]=str1[i];

    }
    str2[j]='\0';

    printf("%s\n",str1);
    printf("%s",str2);

    d=strcmp(str1,str2);
    if (d==0)
    {
        printf("\npalendrom");
    }
    else
    {
       printf("\nnot palendrom");
    }
    getch();
}
