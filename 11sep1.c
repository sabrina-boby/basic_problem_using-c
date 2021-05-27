
#include<stdio.h>
int main()
{
    int n1,n2,rem,lcm,gds,num1,num2;
    printf("enter 2 numb: ");
    scanf("%d%d",&n1,&n2);

    num1=n1;
    num2=n2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;

    }
        gds=n1;
        printf("gds =%d\n",gds);

        lcm=(num1*num2)/gds;
        printf("lcm=%d\n",lcm);


    return 0;


}

