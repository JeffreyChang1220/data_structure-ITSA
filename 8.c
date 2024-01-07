#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int input;
    scanf("%d",&input);
    int count=0;
    for(int i=1;i<input;i++)
    {
        if(input%i==0)
        {
            count++;
        }
    }
    if(count>1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}