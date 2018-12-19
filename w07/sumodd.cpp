#include <stdio.h>

int rsumodd1(int n)
{
    if(n == 1)
    {
        return 1;
    }else
    {
        return rsumodd1(n - 2) + n;
    }
}

int rsumodd2(int n)
{
    if(n == 1)
    {
        return 1;
    }else if(n % 2 == 0){
        return rsumodd2(n - 1);
    }
    else{
        return rsumodd2(n - 2) + n;
    }
}

int main()
{
    int n;
    while(true)
    {
        printf("Enter:");
        scanf("%d", &n);
        printf("sumodd1(%d) = %d\n", n, rsumodd1(n * 2 - 1));
        printf("sumodd2(%d) = %d\n", n, rsumodd2(n));
    }
}
