//1-2 + 3-4 + 5-6 + ... + n1-n2
#include<stdio.h>
int main()
{
    int a=1,b=2,sum=0,n1,n2;
    printf("enter two number :");
    scanf("%d %d",&n1,&n2);
    printf("1-2 + 3-4 + 5-6 + ... + %d-%d",a,b);
    while(a<=n1 && b<=n2)
    {
        sum=sum+ a-b;
        a=a+2;
        b=b+2;
    }
    printf("\n sum= %d",sum);
}
