#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=pow(x,2)+pow(y,2);
    if(sum<=10000)
    {
        printf("inside\n");
    }
    else
    {
        printf("outside\n");
    }
}