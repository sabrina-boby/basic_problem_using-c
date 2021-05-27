//convert to fahrenheit to celsius & celsius to fahrenheit
#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("tempure manu\n");
    printf("1.fahrenheit to celsius \n");
    printf("2.celsius to fahrenheit \n");
    printf("enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("enter tha fahrenheit temp  :");
        scanf("%f",&temp);
        convertedtemp =(temp-32)/1.8;
        printf("the celsius temp is %f",convertedtemp);
        break;
    }
    case 2:
    {
        printf("enter tha celsius temp  :");
        scanf("%f",&temp);
        convertedtemp=(1.8*temp)+32;
        printf("the fahrenheit temp is %f",convertedtemp);

    }
    default :
        printf("press correct input");
    }
    return 0;
}
