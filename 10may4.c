//write a program that read 3 numbers and display maximum
#include<stdio.h>
int main()
{
    int numb1,numb2,numb3;
    printf("enter 3 number :");
    scanf("%d %d %d",&numb1,&numb2,&numb3);

    if(numb1>numb2 && numb1>numb3)
        printf("maximum is numb1");

    else if(numb2>numb3 && numb2>numb1)
        printf("maximum is numb2");

    else if(numb3>numb1 && numb3>numb2)
        printf("maximum is numb3");

    else
        printf("they are equal");
    return 0;
}
