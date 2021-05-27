//1^2 + 2^2 + 3^2 +....+ n^2
#include<stdio.h>
int main()
{
    int a=1,n1,sum=0;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("1^2 + 2^2 + 3^2 +....+ %d^2",n1);
    while(a<=n1)
    {
        sum=sum+(a*a);
        a=a+1;
    }
    printf("\nsum= %d",sum);
}
