#include <stdio.h>

int main()
{
	int sec, hh, mm, ss;
	while(sec != -1)
	{
		printf("Enter secconds:(enter -1 can stop)");
		scanf("%d", &sec);
		if(sec != -1){
			hh = sec / 3600;
			mm = sec % 3600 / 60;
			ss = sec % 60;
			printf("%d seconds = %02d:%02d:%02d\n", sec, hh, mm, ss);	
		}else
			printf("Programming Stop!");
	}
	return 0;
}
