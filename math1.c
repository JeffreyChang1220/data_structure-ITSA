#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int up,down,height;
    scanf("%d %d %d",&up,&down,&height);
    double area;
    area=(up+down)*height/2.0;
    printf("Trapezoid area:%.1f\n",area);
}