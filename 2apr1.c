//max-min array
#include<stdio.h>
int main()
{
    int a[10],n,i,maxposition,minposition;
    printf("enter your number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
            maxposition=i-1 ;
    }
    int min=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
            minposition=i ;
    }
    printf("max : %d\n",max);
    printf("max position : %d\n",maxposition);

    printf("min : %d\n",min);
    printf("min position : %d\n",minposition);
}
