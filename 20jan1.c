//1*2 + 2*3 + 3*4 +....+ n1*n2
#include<stdio.h>
int main()
{
    int a=1,b=2,n1,n2,sum=0;
    printf("Enter 2 number:");
    scanf("%d %d",&n1,&n2);
    printf("1*2 + 2*3 + 3*4 +...+ %d*%d",n1,n2);
    while(a<=n1&&b<=n2)
    {
        sum=sum+a-b;
        a=a+2;
        b=b+2;
    }
    printf("\nsum=%d",sum);
}
