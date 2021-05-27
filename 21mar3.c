//pattern3
#include<stdio.h>
int main()
{
    int col,row,i;
    scanf("%d",&i);
    for(row=i; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }
}
