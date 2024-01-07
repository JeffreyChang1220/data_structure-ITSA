#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char special[10];
    scanf("%s",special);
    char head[3][10];
    for(int i=0;i<3;i++)
    {
        scanf("%s",head[i]);
    }
    int N;
    scanf("%d",&N);
    char input[N][10];
    for(int i=0;i<N;i++)
    {
        scanf("%s",input[i]);
    }
    int awardcount[7]={0};
    for(int i=0;i<N;i++)
    {
        bool specialcount=false;
        int specialnumcount=0;
        for(int j=7;j>=0;j--)
        {
            if(input[i][j]==special[j])
            {
                specialnumcount++;
            }
            else
            {
                break;
            }
        }
        if(specialnumcount==8)
        {
            specialcount=true;
        }
        int headcount[3]={0};
        bool headbreak=false;
        for(int j=0;j<3;j++)
        {
            for(int k=7;k>=0;k--)
            {
                if(input[i][k]==head[j][k])
                {
                    headcount[j]++;
                }
                else
                {
                    break;
                }
            }
        }
        int MAX=headcount[0];
        if(specialcount==true)
        {
            awardcount[0]++;
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                if(headcount[j]>MAX)
                {
                    MAX=headcount[j];
                }
            }
            if(MAX==8)
            {
                awardcount[1]++;
            }
            else if(MAX==7)
            {
                awardcount[2]++;
            }
            else if(MAX==6)
            {
                awardcount[3]++;
            }
            else if(MAX==5)
            {
                awardcount[4]++;
            }
            else if(MAX==4)
            {
                awardcount[5]++;
            }
            else if(MAX==3)
            {
                awardcount[6]++;
            }
        }
    }
    int totalmoney;
    int money[7]={2000000,200000,40000,10000,4000,1000,200};
    for(int i=0;i<7;i++)
    {
        printf("%d",awardcount[i]);
        if(i!=6)
        {
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0;i<7;i++)
    {
        totalmoney+=awardcount[i]*money[i];
    }
    printf("%d\n",totalmoney);

}