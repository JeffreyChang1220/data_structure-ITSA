#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int down,height;
    scanf("%d %d",&down,&height);
    double area;
    area=down*height/2.0;
    printf("%.1f\n",area);
}