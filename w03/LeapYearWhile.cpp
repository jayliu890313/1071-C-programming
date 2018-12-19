#include <stdio.h>

int main(void)
{
	int year;
	int i;	
	while(year != -1){
		printf("請輸入年份判斷是否是閏年:(輸入-1做停止)");
		scanf("%d", &year);
		if(year != -1)
		{
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				printf("%d為閏年\n", year);
			else
				printf("%d非閏年\n", year);
		}else
			printf("程式結束\n"); 
	}	
	return 0;
}
