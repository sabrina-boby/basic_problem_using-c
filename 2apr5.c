//addition & subtraction
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r,n1,n2,sum=0;
    printf("enter row and colomn : ");
    scanf("%d %d",&n1,&n2);

    printf("enter A : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("a [%d] [%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nenter B : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("b [%d] [%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nA is : ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }

    printf("\nB is : ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf(" %d ",b[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            sum=sum+a[i][j]+b[i][j];
            c[i][j]=sum;

        }

        printf("\n");
    }

    printf("sum = ");
    for(i=0; i<n1; i++)
    {
        printf("\t");
        for(j=0; j<n2; j++)
        {
            printf(" %d ",c[i][j]);

        }
        printf("\n");
    }

}
