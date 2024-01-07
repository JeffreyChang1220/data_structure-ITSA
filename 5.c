#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int num;
    scanf("%d",&num);
    int output[8]={0};
    int i=0;
    int number=abs(num);
    while(number>0)
    {
        output[i]=number%2;
        number=number/2;
        i++;
    }
    if(num<0)
    {
        for(int j=7;j>=0;j--)
        {
            if(output[j]==0)
            {
                output[j]=1;
            }
            else
            {
                output[j]=0;
            }    
        }
    }
    if(num<0)
    {
        output[0]+=1;
        int check=output[0];
        int k=0;
        while(check>=2)
        {
            output[k]=check;
            check=output[k+1];
            check+=output[k]/2;
            output[k]%=2;
            k++;
        }
        output[k]=check;
    }
    
    for(int j=7;j>=0;j--)
    {
        printf("%d",output[j]);
    }
    printf("\n");
}