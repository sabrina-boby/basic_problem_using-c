//nomta
#include<stdio.h>
int main()
{
    while(1){
    int numb,i;
    printf("enter any numb:");
    scanf("%d",&numb);

    for(i=1; i<=10; i++)

    printf("%d * %d = %d\n",numb,i,i*numb);

    }
    return 0;
}
