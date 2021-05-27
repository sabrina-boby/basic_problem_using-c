#include<stdio.h>
int main()
{
    char a[30]="sabrina", b[30]="akter";

    printf("real :\n");
    printf("\na = %s",a);
    printf("\nb = %s",b);

    char c[30];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);

    printf("\n\ncpyed :");
    printf("\na = %s",a);
    printf("\nb = %s",b);

}
