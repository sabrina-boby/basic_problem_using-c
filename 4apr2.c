//sum of upper ddiagonal element
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,sum=0;
    printf("enter row and colomn : ");
    scanf("%d",&n);

    printf("\ninter a matrix : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a [%d] [%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nmatrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j)
                sum=sum+a[i][j];
        }
    }
    printf("\nsum : %d",sum);
}
