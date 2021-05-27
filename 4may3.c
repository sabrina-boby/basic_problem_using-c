/* increment:
++x; increment x by one - before it is used
x++; increment x by one -after it is used
   decrement:
--x; decrement x by one - before it is used
x--; increment x by one -after it is used
*/
#include<stdio.h>
int main()
{
    int x=10;

    printf("%d %d\n",x++);//10
    printf("%d %d\n",++x);//12
    printf("%d %d\n",x--);//12
    printf("%d %d\n",--x);//10

    return 0;
}
