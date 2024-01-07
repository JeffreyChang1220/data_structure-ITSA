#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 2;
    }
    else
    {
        return recursive(n-1)+recursive(n/2);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",recursive(n));

}