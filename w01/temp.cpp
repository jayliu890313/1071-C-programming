#include <stdio.h>

int main(){
	float C = 0, F = 0;
	int choice;
	printf("�п�� 1.�ؤ�ū������ū� 2.���ū���ؤ�ū�:(��1��2)\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		{	
			printf("�п�J�ؤ�ū�:");
			scanf("%f", &F);
			C = (F - 32) * 5 / 9;
			printf("%.1f C\n", C);
			break;
		}
		case 2:
		{
			printf("�п�J���ū�:");
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
