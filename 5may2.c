//find tha large number to using if else
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two integer number:");
    scanf("%d %d",&x,&y);

    if(x>y)
    printf("large=%d",x);

    else if(x<y)
    printf("large=%d",y);

    else
    printf("equel");
}
