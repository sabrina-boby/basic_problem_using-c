//1^2 * 2^2 * 3^2 ... n^2
#include<stdio.h>
int main()
{
    int n,gun=1,i=1;
    printf("enter a number :");
    scanf("%d",&n);
    printf("1^2 * 2^2 * 3^2 ... %d^2",n);
    while(i<=n)
    {
        gun=gun*(i*i);
        i=i+2;
    }
    printf("\n gun=%d",gun);
}
