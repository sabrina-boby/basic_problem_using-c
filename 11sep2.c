//loshagu, goshagu
#include<stdio.h>
int main()
{
   int numb1,numb2,n1,n2,rem,lcm,gcd;
   printf("enter two numb: ");
   scanf("%d%d",&n1,&n2);

   numb1=n1;
   numb2=n2;

   while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf("gcd=%d\n",gcd);

    lcm=(numb1*numb2)/gcd;
    printf("lcm=%d\n",lcm);

}
