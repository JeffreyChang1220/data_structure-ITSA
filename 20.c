#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int max(int x,int y)

{
    int temp;
    temp=x>y?x:y;
    return temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        char input[1000];
        fgets(input,1000,stdin);
        char *token[1000]={NULL};
        int tokenCount=0;
        token[0]=strtok(input," \n");
        while(token[++tokenCount]=strtok(NULL," \n"));
        int output[50];
        int MAX=max(strlen(token[0]),strlen(token[1]));
        int num1[MAX],num2[MAX];
        for(int j=0;j<50;j++)
        {
            output[j]=0;
        }
        for(int j=0;j<MAX;j++)
        {
            num1[j]=0;
            num2[j]=0;
        }
        for(int j=strlen(token[0])-1;j>=0;j--)
        {
            num1[strlen(token[0])-1-j]=token[0][j]-'0';
            
        }
        for(int j=strlen(token[1])-1;j>=0;j--)
        {
            num2[strlen(token[1])-1-j]=token[1][j]-'0';
        }
        int over=0;
        for(int j=0;j<MAX;j++)
        {
            int total=(num1[j]+num2[j]+over);
            output[j]+=total%10;
            over=(total/10);   
        }
        if(over!=0)
        {
            output[MAX]=over;
            for(int j=MAX;j>=0;j--)
            {
                printf("%d",output[j]);
            }
            printf("\n");
        }
        else
        {
            for(int j=MAX-1;j>=0;j--)
            {
                printf("%d",output[j]);
            }
            printf("\n");
        }


    }
}