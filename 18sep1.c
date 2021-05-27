//sum numbers
#include<stdio.h>
int main()
{
    int r,numb,temp, sum=0;
    printf("enter numb :");
    scanf("%d",&numb);
    temp=numb;


    while(temp!=0)
    {
        r=temp%10;
         sum=sum+r;
        temp=temp/10;

    }

 printf("sum of digits: %d\n",sum);


}
