#include <stdio.h>

int main(void)
{
	int year;
	int i;
	for(i = 0 ; i < 4; i++)
	{
		printf("請輸入年份判斷是否是閏年:");
		scanf("%d", &year);
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d為閏年\n", year);
		}else{
			printf("%d非閏年\n", year);
		}
	}
	return 0;
}
