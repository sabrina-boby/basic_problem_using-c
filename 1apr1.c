//1d array-1
#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0,avj;
    printf("enter your number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
       sum=sum+a[i];
    }

       printf("sum = %d\n",sum);
       printf("avj = %.2f",(float)sum/n);
}
