//koto gulo numb ase ta jog kora
#include<stdio.h>
int main()
{
    int numb,count=0;
    printf("enter any numb : ");
    scanf("%d",&numb);

    while(numb!=0)
    {
       numb=numb/10;
        ++count;
    }
    printf("total numb= %d",count);
}
