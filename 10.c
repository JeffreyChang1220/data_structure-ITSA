#include <stdio.h>

void GCD(int a,int b) 
{
    if( a == 0 || b == 0) 
    {
        return;
    }
    while( a > 0 && b > 0 ) 
    {

        if( a > b )
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if(a==0)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",a);
    }
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    GCD(a,b);
    return 0;
}