#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char firstalpha[26]={'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};
    int correspondnum[26]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
    char input[20];
    scanf("%s",input);
    int firstnum;
    for(int i=0;i<26;i++)
    {
        if(firstalpha[i]==input[0])
        {
            firstnum=correspondnum[i];
        }
    }
    int X1=firstnum/10;
    int X2=firstnum%10;
    int calculate=X1+9*X2;
    for(int i=1;i<10;i++)
    {
        calculate+=(input[i]-'0')*(9-i);
    }
    calculate+=(input[9]-'0');
    if(calculate%10==0)
    {
        printf("CORRECT!!!\n");
    }
    else
    {
        printf("WRONG!!!\n");
    }

}