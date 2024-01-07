#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char input[100];
    fgets(input,100,stdin);
    char original[100];
    strcpy(original,input);
    char *token[100]={NULL};
    int tokenCount=0;
    token[0]=strtok(input," ,.?!\"\'");
    while(token[++tokenCount]=strtok(NULL," ,.?!\"\'"));
    int alpha[26]={0};
    for(int i=0;i<strlen(original);i++)
    {
        if(tolower(original[i])>=97&&tolower(original[i])<=122)
        {
            
            alpha[tolower(original[i])-'a']++;
        }
    }
    printf("%d\n",tokenCount);
    for(int j=0;j<26;j++)
    {
        if(alpha[j]!=0)
        {
            printf("%c : %d\n",j+'a',alpha[j]);
        }
    }
}