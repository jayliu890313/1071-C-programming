#include <stdio.h>

int main()
{
	int sec, hh, mm, ss;
	while(true)
	{
		printf("Enter secconds:");
		scanf("%d", &sec);
		hh = sec / 3600;
		mm = sec % 3600 / 60;
		ss = sec % 60;
		printf("%d seconds = %02d:%02d:%02d\n", sec, hh, mm, ss);
	}

	return 0;
}
