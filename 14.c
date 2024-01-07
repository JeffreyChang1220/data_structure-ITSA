#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char input[100];
    scanf("%s",input);
    bool reverse=true;
    if(strlen(input)%2==0)
    {
        for(int i=0;i<strlen(input)/2;i++)
        {
            if(input[i]!=input[strlen(input)-1-i])
            {
                reverse=false;
                break;
            }
            
        }
    }
    else
    {
        for(int i=0;i<strlen(input)/2;i++)
        {
            if(input[i]!=input[strlen(input)-1-i])
            {
                reverse=false;
                break;
            }
            
        }
    }
    if(reverse==true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}