#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    while(1)
    {
        char input[1000];
        if(fgets(input,1000,stdin)==NULL)
        {
            break;
        }
        char *token[1000]={NULL};
        int tokenCount=0;
        token[0]=strtok(input," \n");
        while(token[++tokenCount]=strtok(NULL," \n"));
        int appearnum[tokenCount];
        for(int i=0;i<tokenCount;i++)
        {
            appearnum[i]=0;
        }
        bool visited[tokenCount];
        for(int i=0;i<tokenCount;i++)
        {
            visited[i]=false;
        }
        for(int i=0;i<tokenCount;i++)
        {
            for(int j=0;j<tokenCount;j++)
            {
                
                if(visited[j]==false&&strcmp(token[i],token[j])==0)
                {
                    visited[j]=true;
                    appearnum[i]++;
                }
            }
        }
        bool successful=false;
        for(int i=0;i<tokenCount;i++)
        {
            printf("%d\n",appearnum[i]);
            if(appearnum[i]>tokenCount/2)
            {
                printf("%s\n",token[i]);
                successful=true;
            }
        }
        if(successful==false)
        {
            printf("NO\n");
        }
        
    }
}