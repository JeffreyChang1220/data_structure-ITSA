#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int input;
    scanf("%d",&input);
    if(3<=input&&input<=5)
    {
        printf("Spring\n");
    }
    else if(6<=input&&input<=8)
    {
        printf("Summer\n");
    }
    else if(9<=input&&input<=11)
    {
        printf("Autumn\n");
    }
    else if(12<=input||input<=2)
    {
        printf("Winter\n");
    }
}