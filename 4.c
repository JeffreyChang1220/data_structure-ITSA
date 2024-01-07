#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int firsthour,firstmin;
    int secondhour,secondmin;
    int firsttotal,secondtotal;
    scanf("%d %d",&firsthour,&firstmin);
    scanf("%d %d",&secondhour,&secondmin);
    firsttotal=60*firsthour+firstmin;
    secondtotal=60*secondhour+secondmin;
    int totaltime;
    totaltime=secondtotal-firsttotal;
    int totalfee;
    if(totaltime<30)
    {
        printf("Free\n");
    }
    else if(totaltime>30&&totaltime<=120)
    {
        int fee=totaltime/30;
        totalfee=30*fee;
    }
    else if(totaltime>120&&totaltime<=240)
    {
        int fee=totaltime/30;
        totalfee=120+40*(fee-4);
    }
    else if(totaltime>240)
    {
        int fee=totaltime/30;
        totalfee=120+160+60*(fee-8);
    }
    printf("%d\n",totalfee);
}