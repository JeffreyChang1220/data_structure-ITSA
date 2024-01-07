#include <stdio.h>
#include <stdlib.h>
int main()
{
    int column,row;
    scanf("%d %d",&column,&row);
    int input[column][row];
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&input[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",input[j][i]);
            if(j!=column-1)
            {
                printf(" ");
            }
        }
        if(i!=row-1)
        {
            printf("\n");
        }
    }
    printf("\n");
}