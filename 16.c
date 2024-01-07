#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char str1[128];
    char str2[512];
    scanf("%s",str1);
    scanf("%s",str2);
    int count=0;
    for(int i=0;i<strlen(str2);i++)
    {
        if(i+strlen(str1)>strlen(str2))
        {
            break;
        }
        bool successful=true;
        for(int j=i;j<i+strlen(str1);j++)
        {
            if(str1[j-i]!=str2[j])
            {
                successful=false;
            }
        }
        if(successful==true)
        {
            count++;
        }
    }
    printf("%d\n",count);
}