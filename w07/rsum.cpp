#include <stdio.h>

int rsum(int n);
int sum(int n);

int rsum(int n)
{
    printf("%d\n", n);
    if(n == 1)
    {
        return 1;
    }else{
        return rsum(n - 1) + n;
    }
}

int sum(int n)
{
    int i;
    int sum;
    for(i = 0; i < n + 1; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter:");
    scanf("%d", &n);
    printf("sum(%d) = %d\n", n, sum(n));
    printf("rsum(%d) = %d\n", n, rsum(n));
}
