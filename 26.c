#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int sum(int input)
{
    int total=0;
    int i=3;
    while(i>=0)
    {
        int temp;
        temp=pow(10,i);
        total+=input/temp;
        input%=temp;
        i--;
    }
    return total;
}
typedef struct number
{
    char num[100];
    int sum;
}number;
int main()
{
    int n;
    scanf("%d",&n);
    number input[n];
    
    
    for(int i=0;i<n;i++)
    {
        int ininteger=0;
        scanf("%s",input[i].num);
        for (int k = 0; input[i].num[k] != '\0'; ++k) 
        {
            ininteger += input[i].num[k] - '0';
        }
        input[i].sum=ininteger;
    }
    number temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (input[j].sum > input[j+1].sum) {
                temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
            else if(input[j].sum == input[j+1].sum)
            {
                if(atoi(input[j].num) > atoi(input[j+1].num))
                {
                    temp = input[j];
                    input[j] = input[j + 1];
                    input[j + 1] = temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s",input[i].num);
        if(i!=n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
}