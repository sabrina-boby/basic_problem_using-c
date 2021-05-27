//armstrong numb
#include<stdio.h>
int main()
{
    int r,numb,temp,sum=0;
    printf("enter numbers: ");
    scanf("%d",&numb);

    temp=numb;
    while(temp!=0);
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==numb)
        printf("armstrong numb");
    else
        printf("not armstrong numb");



}
