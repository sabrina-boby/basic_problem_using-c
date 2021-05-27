#include<stdio.h>
int main()
{
   int numb,i,count=0;
   printf("enter any positive numb:");
   scanf("%d",&numb);


   for(i=2;i<numb;i++)
   {

          if(numb%i==0)
          {
            count++;
            break;
          }

   }
        if(count==0)
         printf(" i love you boby\n");
        else
         {printf(" will u merry me??\n");printf(" yes jan obhiously\n");}

      return main();

   }








