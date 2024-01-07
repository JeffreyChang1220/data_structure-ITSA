#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int input;
    scanf("%d",&input);
    int count=0;
    for(int i=1;i<=input;i++)
    {
        if(i%3==0)
        {
            count+=i;
        }
    }
    printf("%d\n",count);
    
}