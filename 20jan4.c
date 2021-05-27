//1-n ovdi jor-shankha er jog print with using loop
#include<stdio.h>
int main()
{
    int i,n2,sum=0;
    printf("enter tha number :");
    scanf("%d",&n2);
    for(i=2; i<=n2; i=i+2)
    {

        sum=sum+i;

    }
    printf("\t%d",sum);
}

