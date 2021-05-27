#include<stdio.h>
int main()
{
    int a[]={1,0,9,8,7,6,5,4,3},i,position=-1,num;

    printf("enter your numb : ");
    scanf("%d",&num);

    for(i=0; i<10; i++)
    {
        if(num==a[i])
        position=i+1;

    }
    if(position==-1)
    {
        printf("not found");
    }
    else
    {
        printf("numb = %d \nposition = %d",num,position);
    }
}
