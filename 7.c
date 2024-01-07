#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int output[n][2];
    for(int i=0;i<n;i++)
    {
        char operation;
        int a1,b1,a2,b2;
        scanf(" %c %d %d %d %d",&operation,&a1,&b1,&a2,&b2);
        int firstnum,secondnum;
        if(operation=='+')
        {
            firstnum=a1+a2;
            secondnum=b1+b2;
        }
        if(operation=='-')
        {
            firstnum=a1-a2;
            secondnum=b1-b2;
        }
        if(operation=='*')
        {
            firstnum=a1*a2-b1*b2;
            secondnum=a1*b2+b1*a2;
        }
        output[i][0]=firstnum;
        output[i][1]=secondnum;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",output[i][0]);
        printf("%d",output[i][1]);
        printf("\n");
    }
}