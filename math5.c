#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    double length;
    scanf("%lf", &length);

    printf("%.1f\n", round(length* length * 10) / 10.0);

    return 0;
}