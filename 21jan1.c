//1 + 1/2 + 1/3 +...+ 1/n
#include<stdio.h>
int main()
{
    float i=1,n,sum=0;

    printf("enter a number :");
    scanf("%f",&n);

    while(i<=n)
    {
        sum=sum+1/i;


        if(i==1)
            printf("\n 1 +");
        else if(i==n)
            printf("\t (1/%f)",i);
        else
            printf("\t (1/%f) +",i);

        i=i+1;
    }
    printf("\nsum= %f",sum);
}
