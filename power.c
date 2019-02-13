#include <stdio.h>
int main()
{
    int base, exponent;

    long long result = 1;

    
    scanf("%d %d",&base,&exponent);
while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("%lld", result);

    return 0;
}
