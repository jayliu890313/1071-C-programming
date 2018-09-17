#include <stdio.h>

int main(){
	float C = 0, F = 0;
	int choice;
	printf("請選擇 1.華氏溫度轉攝氏溫度 2.攝氏溫度轉華氏溫度:(選1或2)\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		{	
			printf("請輸入華氏溫度:");
			scanf("%f", &F);
			C = (F - 32) * 5 / 9;
			printf("%.1f C\n", C);
			break;
		}
		case 2:
		{
			printf("請輸入攝氏溫度:");
			scanf("%f", &C);
			F = C * 9 / 5 + 32;
			printf("%.1f F\n", F);
			break;
		}
	}
	return 0;
}
/*
Enter temperature in C: 20.5
20.5 C = 68.9 F

Enter temperature in F: 80.5
80.5 F = 26.9 C
*/
