#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int month,day;
    scanf("%d %d",&month,&day);
     if((month == 1&&day > 20)||(month == 2&&day < 19))
     {
        printf("Aquarius\n");
     }
    else if ((month == 2&&day > 18)||(month == 3&&day < 21))
    {
        printf("Pisces\n");
    }
    else if ((month == 3&&day > 20)||(month == 4&&day < 21))
    {
        printf("Aries\n");
    }
    else if ((month == 4&&day > 20)||(month == 5&&day < 22))
    {
        printf("Taurus\n");
    }
    else if ((month == 5&&day > 21)||(month == 6&&day < 22))
    {
        printf("Gemini\n");
    }
    else if ((month == 6&&day > 21)||(month == 7&&day < 23))
    {
        printf("Cancer\n");
    }
    else if ((month == 7&&day > 22)||(month == 8&&day < 24))
    {
        printf("Leo\n");
    }
    else if ((month == 8&&day > 23)||(month == 9&&day < 24))
    {
        printf("Virgo\n");
    }
    else if ((month == 9&&day > 23)||(month == 10&&day < 24))
    {
        printf("Libra\n");
    }
    else if ((month == 10&&day > 23)||(month == 11&&day < 23))
    {
        printf("Scorpio\n");
    }
    else if ((month == 11&&day > 22)||(month == 12&&day < 22))
    {
        printf("Sagittarius\n");
    }
    else if ((month == 12&&day > 21)||(month == 1&&day < 21))
    {
        printf("Capricorn\n");
    }
}