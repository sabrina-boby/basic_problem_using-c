//(1-1000) palindrom print
#include<stdio.h>
int main()
{
    int i,r,j,sum=0,numb;

    for(i=1;i<=1000;i++)
    {
        sum=0;
        j=i;

        while(j!=0)
        {
            r=j%10;
            j=j/10;
            sum=(sum*10)+r;
        }

        if(sum!=i)
            printf("%d  ",sum);


    }

    return 0;
}
