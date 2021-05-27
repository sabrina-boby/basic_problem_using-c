//find large & small numb to using if else
#include<stdio.h>
int main()
{
    int numb1,numb2;
    printf("enter two numb :");
    scanf("%d %d",&numb1,&numb2);

    if(numb1>numb2)
    printf("large is numb1");

    else if(numb1<numb2)
    printf("large is numb2");

    else
    printf("they are equal");

    return 0;
}
