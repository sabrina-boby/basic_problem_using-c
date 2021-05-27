#include<stdio.h>
int main()
{
    int caseNumber, n,i,j;
    printf("Enter the value of caseNumber: ");
    scanf("%d",&caseNumber);
    for(i=0; i<caseNumber; i++)
    {
        printf("Enter the value of n: ");
        scanf("%d",&n);
      for(j=0; j<=n; j++)
      {
          if(j%2==1)
          {
             printf("%d\n",j);
          }
      }
    }
}



