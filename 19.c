#include <stdio.h>

int main() 
{
    int n;
    int st, et, max = 0;
    int t[25] = {0}; 

    scanf("%d", &n);

    for (int j = 0; j < n; j++) 
    {
        scanf("%d %d", &st, &et);
        for (int i = st; i < et; i++) 
        {
            t[i]++;
        }
    }

    for (int k = 0; k < 25; k++) 
    {
        if (t[k] > max) 
        {
            max = t[k];
        }
    }

    printf("%d\n", max);

    return 0;
}
