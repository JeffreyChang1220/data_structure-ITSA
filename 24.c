#include <stdio.h>

int main()
{
        float r;
        int n, p;
        float sum = 0;

        scanf("%f", &r);
        scanf("%d", &n);
        scanf("%d", &p);

        sum = 0;  // Initialize sum with the principal amount

        for (int i = 0; i < n; ++i)
        {
            sum += p;          
            sum *= (1.0 + r);  // Update sum by multiplying with (1.0 + r)
            // Add the principal amount after the multiplication
        }

        printf("%d\n", (int)sum);

    return 0;
}