#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    char input[33];
    getchar();
    for(int i=0;i<n;i++)
    {
        
        fgets(input,33,stdin);
        int count=0;
        for(int j=0;j<strlen(input);j++)
        {
            count+=(input[j]-0);
        }
        printf("%d\n",count-10);
        
    }

}