#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char input[1000];
    fgets(input,1000,stdin);
    int offset;
    scanf("%d",&offset);
    char *token[1000]={NULL};
    int tokenCount=0;
    token[0]=strtok(input,"\n");
    while(token[++tokenCount]=strtok(NULL,"\n"));
    for(int i=0;i<tokenCount;i++)
    {
        for(int j=0;j<strlen(token[i]);j++)
        {
            if(65<=token[i][j]&&token[i][j]<=90)
            {
                
                if(token[i][j]+offset>90)
                {
                    token[i][j]=(token[i][j]+offset)%90-1+'A';
                    printf("%c",token[i][j]);
                }
                else
                {
                    printf("%c",(token[i][j]+offset));
                }
            }
            else if(97<=token[i][j]&&token[i][j]<=122)
            {
                if(token[i][j]+offset>122)
                {
                    token[i][j]=(token[i][j]+offset)%122-1+'a';
                    printf("%c",token[i][j]);
                }
                else
                {
                    printf("%c",(token[i][j]+offset));
                }
            }
            else if(48<=token[i][j]&&token[i][j]<=57)
            {
                if(token[i][j]+offset>57)
                {
                    token[i][j]=(token[i][j]+offset)%57-1+'0';
                    printf("%c",token[i][j]);
                }
                else
                {
                    printf("%c",(token[i][j]+offset));
                }
            }
            else
            {
                printf("%c",token[i][j]);
            }
        }
    }
    printf("\n");
}