//transpose
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n1,n2;
    printf("enter row and colomn : ");
    scanf("%d %d",&n1,&n2);

    printf("\ninter a matrix : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("a [%d] [%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }

     printf("\nmatrix is : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

     for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
           b[j][i]=a[i][j];
        }
    }

     printf("\ntranspose matrix is : \n");
    for(i=0; i<n2; i++)
    {
        for(j=0; j<n1; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

}

