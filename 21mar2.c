//pattern 2
#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);

    for(col=1; col<=n; col++)
    {
        for(row=1; row<=n; row++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }



}
