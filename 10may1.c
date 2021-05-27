//surch gread using if else
#include<stdio.h>
int main()
{
    float result;
    printf("enter any numb :");
    scanf("%f",&result);

    if(result>=80)
    printf("a+");

    else if(result>=70)
    printf("a");

    else if(result>=60)
    printf("a-");

    else if(result>=50)
    printf("b");

    else
    printf("fail");

    return 0;

}
