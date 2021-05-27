//continue/break  //1,2,3,5,6,7,9,10,11,13,14,15,17
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<20;i++)
    {
        if(i%4==0)
        continue;
        printf("%d\n",i);

       if(i==17)
        break;
    }
}

//1,2,3,5,6,7,9,10,11,13,14,15,17
