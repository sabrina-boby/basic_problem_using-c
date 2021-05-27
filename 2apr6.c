//multiplication
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k,sum=0;
    printf("enter 1st row and column : ");
    scanf("%d %d",&r1,&c1);
    printf("enter 2nd row and column : ");
    scanf("%d %d",&r2,&c2);

    while(r1!=c2)
    {
        printf("not valied !! \n");
        printf("enter 1st row and column : ");
        scanf("%d %d",&r1,&c1);
        printf("enter 2nd row and column : ");
        scanf("%d %d",&r2,&c2);
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a [%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b [%d] [%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("a : ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }

    printf("\nb : ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d ",b[i][j]);

        }
        printf("\n");
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
          for(k=0; k<c1; k++)
          {
              sum=sum+a[i][k]*b[k][j];
          }
          c[i][j]=sum;
          sum=0;
        }

    }


    printf("\nc : ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d ",c[i][j]);

        }
        printf("\n");
    }


}
