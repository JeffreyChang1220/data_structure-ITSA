#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char answer[4];
    scanf("%s",&answer);
    char input[4];
    char correct[4];
    strcpy(correct,answer);
    while(1)
    {
        int A=0,B=0;
        scanf("%s",&input);
        if(input[0]=='0'&&input[1]=='0'&&input[2]=='0'&&input[3]=='0')
        {
            return 0;
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(i!=j)
                {
                    if(input[i]==correct[j])
                    {
                        
                        B++;
                    }
                }
                else
                {
                    if(input[i]==correct[j])
                    {
                        A++;
                    }
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
}