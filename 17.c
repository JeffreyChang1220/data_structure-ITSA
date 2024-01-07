#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char input[1000];
    fgets(input,1000,stdin);
    for(int i=0;i<1000;i++)
    {
        input[i]=tolower(input[i]);
    }
    char *token[1000]={NULL};
    int tokenCount=0;
    token[0]=strtok(input," ,.?!\"\'");
    while(token[++tokenCount]=strtok(NULL," ,.?!\"\'\r\n"));
    bool judge[tokenCount];
    for(int i=0;i<tokenCount;i++)
    {
        judge[i]=true;
    }
    for(int i=0;i<tokenCount;i++)
    {
        for(int j=i+1;j<tokenCount;j++)
        {
            if(judge[i]==true&&strcmp(token[i],token[j])==0)
            {
                judge[j]=false;
            }
        }
    }
    int lastpos;
    for(int i=0;i<tokenCount;i++)
    {
        if(judge[i]==true)
        {
            lastpos=i;
        }
    }
    for(int i=0;i<tokenCount;i++)
    {
        if(judge[i]==true&&i!=lastpos)
        {
            printf("%s ",token[i]);
        }
        else if(judge[i]==true&&i==lastpos)
        {
            printf("%s",token[i]);
        }
    }
    if(tokenCount>1)
    {
        printf("\n");
    }
}