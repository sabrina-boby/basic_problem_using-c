//locical operator
#include<stdio.h>
int main()
{
   int x,y,z;
   printf("enter any 3 numb :");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y && x>z)
   printf("large numb is %d\n",x);
   else if(y>x && y>z)
   printf("large numb is %d\n",y);
   else if(z>x && z>y)
   printf("large numb is %d\n",z);
   else
   printf("they are equal %d\n",z);

   return 0;
}
