//1-2 + 3-4 + 5-6 + ... + n1-n2
//(1+3+5+...+n1)-(2+4+6+...+n2)
#include<stdio.h>
int main()
{
    int biyog=0,n1,n2,a=1,b=2,sum1=0,sum2=0;
    printf("enter two number : ");
    scanf("%d %d",&n1,&n2);
    printf("(1+3+5+...+%d)-(2+4+6+...+%d)",n1,n2);

    while(a<=n1 && b<=n2)
    {
        biyog=sum1-sum2;
        sum1=sum1+a;
        sum2=sum2+b;

        a++;
        b++;

    }

    printf("\n biyog=%d",biyog);


}
