#include <stdio.h>

int total(int n1, int n2);

int total(int n1, int n2)
{
    int sum = 0;
    int i;
    if(n1 > 0 && n2 > 0)
    {
        for(i = n1; i < n2 + 1; i++)
        {
            sum += i;
        }
        printf("從%d累加到%d的值為%d\n", n1, n2, sum);
        sum = 0;
    }
	return sum;
}

int main()
{
	int n1, n2;
	while(n1 >= 0 && n2 >= 0)
	{
		printf("請輸入要累加的範圍n1和n2:(必須 >= 0)\n");
		scanf("%d %d", &n1, &n2);
		total(n1, n2);
	}
	return 0;
}
