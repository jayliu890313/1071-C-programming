#include <stdio.h>

long fib(int n);

long fib(int n)
{
    if(n <= 2)  return 1;
    else{
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{
    printf("fib(3) = %ld\n", fib(3));
    printf("fib(10) = %ld\n", fib(10));
    printf("fib(30) = %ld\n", fib(30));

}
