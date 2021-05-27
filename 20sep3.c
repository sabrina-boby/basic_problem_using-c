
#include<stdio.h>
int main()
{
    int numb,sum=0,r,m,rev=0,x;
    printf("enter number : ");
    scanf("%d",&numb);
    m=numb;
    while(m!=0)
    {
        r=m%10;
        m=m/10;
        rev=(rev*10)+r;
    }
     if(numb==rev)
     {
        printf("palindrom\n");
        printf("valobashi mahedi k");
     }

     else
     {
    printf("not palindrom\n");
    printf("ami sara jibon tmr sathe thakte chai go\n plzz amk sere jaio na.. ");
     }
    return 0;
}



