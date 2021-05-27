//1.5 + 2.5 + 3.5 +....+ n
#include<stdio.h>
int main()
{
    float a=1.5,n1,sum=0;
    printf("Enter 2 number:");
    scanf("%f",&n1);
    printf("1.5 + 2.5 + 3.5 +...+ %f",n1);
    while(a<=n1)
    {
        sum=sum+a;
        a=a+1;

    }
    printf("\nsum=%f",sum);
}

