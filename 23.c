#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int money,apple,orange,peach;
    scanf("%d,%d,%d,%d",&money,&apple,&orange,&peach);
    int total=15*apple+20*orange+30*peach;
    int returnmoney=money-total;
    int coin[3];
    if(returnmoney<=0)
    {
        printf("0\n");
        return 0;
    }
    coin[2]=returnmoney/50;
    returnmoney%=50;
    coin[1]=returnmoney/5;
    returnmoney%=5;
    coin[0]=returnmoney/1;
    for(int i=0;i<3;i++)
    {
        printf("%d",coin[i]);
        if(i!=2)
        {
            printf(",");
        }
        
    }
    printf("\n");


}