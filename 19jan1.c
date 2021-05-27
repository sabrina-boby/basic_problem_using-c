//1+2+3+...+n
#include<stdio.h>
int main()
{
    int a,sum=0,i=1;
    printf("enter any number :");
    scanf("%d",&a);
    printf("1+2+3+....+%d",a);
    while(i<=a)
    {
        sum=sum+i;
        i=i+1;

    }
    printf("\nsum=%d",sum);
}
