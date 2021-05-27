//temputer convart-to using switch
#include<stdio.h>
int main()
{
  int choice;
  float temp,ca,fa;
  printf("tempature convart manu\n");
  printf("press 1 - farenhite to celcious\n");
  printf("press 2 - celcious to farenhite\n");
  printf("enter your choice:");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:printf("enter farenhite temp :");
         scanf("%f",&temp);
         ca=(temp-32)/1.8;
         printf("celcious is:%f",ca);
         break;

   case 2:printf("enter celcious temp :");
         scanf("%f",&temp);
         fa=(1.8*temp)+32;
         printf("farenhite is:%f",fa);
         break;

   default:printf("not a correct option\n");
          break;



  }



    return 0;
}
