#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, x1, x2;
	printf("請輸入abc三個數:");
	scanf("%lf%lf%lf", &a, &b, &c);
	if(b * b - 4 * a * c >= 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c))/ (2 * a);
		printf("%.0lfX^2 - %.0lfX + %.0lf = 0 兩個解分別為:%.2lf和%.2lf", a, b, c, x1, x2);
	}else
	{
		printf("無實數解!\n");
	}
	return 0;
}
