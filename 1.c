#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct digital
{
    int star[5][5];
}digital;
int main()
{
    digital input[10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                input[i].star[j][k]=0;
            }
        }
    }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            input[0].star[i][j]=-1;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            input[1].star[i][j]=-1;
        }
    }
    for(int j=0;j<4;j++)
    {
        input[2].star[1][j]=-1;
    }
    for(int j=1;j<5;j++)
    {
        input[2].star[3][j]=-1;
    }
    for(int i=1;i<4;i+=2)
    {
        for(int j=0;j<4;j++)
        {
            input[3].star[i][j]=-1;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<4;j++)
        {
            input[4].star[i][j]=-1;
        }
    }
    for(int i=3;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            input[4].star[i][j]=-1;
        }
    }
    for(int j=0;j<4;j++)
    {
        input[5].star[3][j]=-1;
    }
    for(int j=1;j<5;j++)
    {
        input[5].star[1][j]=-1;
    }
    for(int j=1;j<5;j++)
    {
        input[6].star[1][j]=-1;
    }
    for(int j=1;j<4;j++)
    {
        input[6].star[3][j]=-1;
    }
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            input[7].star[i][j]=-1;
        }
    }
    for(int i=1;i<4;i+=2)
    {
        for(int j=1;j<4;j++)
        {
            input[8].star[i][j]=-1;
        }
    }
    for(int j=1;j<4;j++)
    {
        input[9].star[1][j]=-1;
    }
    for(int i=3;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            input[9].star[i][j]=-1;
        }
    }
    int fourdigit;
    int spiltdigit[4];
    scanf("%d",&fourdigit);
    int number=3;
    while(number>=0)
    {
        int base=pow(10,number);
        spiltdigit[3-number]=fourdigit/base;
        //printf("spiltdigit[3-number]:%d",spiltdigit[3-number]);
        fourdigit%=base;
        number--;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(input[spiltdigit[j]].star[i][k]==0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            if(j!=3)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //printf("\n");
    return 0;
    
}