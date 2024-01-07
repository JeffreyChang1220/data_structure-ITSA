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
        int height,gender;
        height=atoi(token[0]);
        gender=atoi(token[1]);
        if(gender==1)
        {
            float standard;
            standard=(height-80)*0.7;
            printf("%.1f\n",standard);
        }
        else
        {
            float standard;
            standard=(height-70)*0.6;
            printf("%.1f\n",standard);
        }
    }
}