//calculator using switch
#include<stdio.h>
int main()
{
    double x,y;
    char op;

    printf("enter an operator(+,-,*,/):");
    scanf("%c",&op);

    printf("enter two operands:");
    scanf("%lf%lf",&x,&y);

    switch(op)
    {
    case '+':
        printf("%lf + %lf = %lf",x,y,x+y);
        break;

    case '-':
        printf("%lf - %lf = %lf",x,y,x-y);
        break;

    case '*':
        printf("%lf * %lf = %lf",x,y,x*y);
        break;

    case '/':
        printf("%lf / %lf = %lf",x,y,x/y);
        break;

    default:
        printf("not a valied operator");

    }




    return 0;
}
