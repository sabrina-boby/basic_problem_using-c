//1+2+3+4....n
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);

    printf("1+2+3+...+%d",n);
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+i;

    }
    printf("\nsum=%d",sum);
}
