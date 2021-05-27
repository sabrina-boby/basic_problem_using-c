#include<stdio.h>
void main()
{
    char name [30];
    char university [30];
    char batch [30];
    char hall [30];

    printf("Name :");
    gets(name);
    printf("University :");
    gets(university);
    printf("Batch :");
    gets(batch);
    printf("Hall :");
    gets(hall);


    printf("\nName       : %s\n",name);
    printf("University : %s\n",university);
    printf("Batch      : %s\n",batch);
    printf("Hall       : %s\n",hall);

}

