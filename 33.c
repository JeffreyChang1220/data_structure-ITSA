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
        int sum=0;
        for(int i=0;i<tokenCount;i++)
        {
            sum+=atoi(token[i]);
        }
        float output;
        output=(float)sum/(float)tokenCount;
        printf("Size: %d\n",tokenCount);  
        printf("Average: %.3f\n", output);  
    }
}