#include <stdio.h>

int main(void)
{
	int year;
	int i;
	for(i = 0 ; i < 4; i++)
	{
		printf("�п�J�~���P�_�O�_�O�|�~:");
		scanf("%d", &year);
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d���|�~\n", year);
		}else{
			printf("%d�D�|�~\n", year);
		}
	}
	return 0;
}
