
#include<stdio.h>
int main()
{
    char a[30],ch;
    int i,capital,small,number,other;
    printf("enter your string : ");
    gets(a);
    i=capital=small=number=other=0;

    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
            capital++;

        else if(a[i]>=97 && a[i]<=122)
            small++;

        else if(a[i]>=48 && a[i]<=57)
            number++;
        else
            other++;

        i++;

    }
    printf("\ncapital number is : %d\n",capital);
    printf("small number is : %d\n",small);
    printf("digit number is : %d\n",number);
    printf("other number is : %d\n",other);


}
