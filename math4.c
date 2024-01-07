#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    int mod=num1%num2;
    if(mod<0)
    {
        printf("%d/%d=%d...%d\n",num1,num2,num1/num2-1,mod+num2);
    }
    else
    {
        printf("%d/%d=%d...%d\n",num1,num2,num1/num2,num1%num2);
    }
    
}