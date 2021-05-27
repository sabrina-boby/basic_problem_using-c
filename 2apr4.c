//copy element
#include<stdio.h>
int main()
{
    int a1[10]={0,9,8,7,6,5,4,3,2,1},i,a2[10];
    printf("a1 is : ");
    for(i=0; i<10; i++)
    {
        printf("%d",a1[i]);
    }
    for(i=0; i<10; i++)
    {
        a2[i]=a1[i];
    }
    printf("\na2 is : ");
    for(i=0; i<10; i++)
    {
        printf("%d",a2[i]);
    }
}
