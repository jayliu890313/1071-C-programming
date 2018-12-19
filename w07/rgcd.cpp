#include <stdio.h>

int rgcd(int a, int b);
int gcd(int a, int b);

int rgcd(int a, int b)
{
    if(a == 0)  return b;
    else
    {
        return rgcd(b % a, a);
    }
}

int gcd(int a, int b)
{
    int n;
    while(a % b != 0)
    {
        n = b;
        b = a % b;
        a = n;
    }
    return  b;
}

int main()
{
    printf("rgcd(48, 126) = %d\n", rgcd(48, 126));
    printf("gcd(48, 126) = %d\n", gcd(48, 126));
    printf("rgcd(48, 128) = %d\n", rgcd(48, 128));
    printf("gcd(48, 128) = %d\n", gcd(48, 128));
    printf("rgcd(48, 144) = %d\n", rgcd(48, 144));
    printf("gcd(48, 144) = %d\n", gcd(48, 144));
    printf("rgcd(48, 48) = %d\n", rgcd(48, 48));
    printf("gcd(48, 48) = %d\n", gcd(48, 48));
}
