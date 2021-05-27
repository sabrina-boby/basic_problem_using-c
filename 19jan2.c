//1*2 + 2*3 + 3*4 +....+ n1*n2
#include<stdio.h>
int main()
{
    int a,b,n1,n2,sum=0;
    printf("Enter 2 number:");
    scanf("%d %d",&n1,&n2);
    printf("1*2 + 2*3 + 3*4 +...+ %d*%d",n1,n2);
    for(a=1&&b=2; a<=n1&&b<=n2; a=a+1&&b=b+1)
    {
        sum=sum+a*b;

    }
    printf("sum=%d",sum);
}
