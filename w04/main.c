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
        printf("�q%d�֥[��%d���Ȭ�%d\n", n1, n2, sum);
        sum = 0;
    }
	return sum;
}

int main()
{
	int n1, n2;
	while(n1 >= 0 && n2 >= 0)
	{
		printf("�п�J�n�֥[���d��n1�Mn2:(���� >= 0)\n");
		scanf("%d %d", &n1, &n2);
		total(n1, n2);
	}
	return 0;
}
