#include <stdio.h>
#include <stdlib.h>

int leapYear(int year);
int TimeCon(int hh, int mm, int ss);

int leapYear(int year)
{
	int i;
    if(year != -1)
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("%d is a leap year.\n", year);
        else
            printf("%d is not a leap year.\n", year);
    }else
        printf("程式結束\n");
	return year;
}

int TimeCon(int hh, int mm, int ss)
{
    int time;
    time = hh * 3600 + mm * 60 + ss;
    return time;
}

int main()
{
    int choice;
    int year;
    int time;
    int hh, mm, ss;
    while(1)
    {
        printf("1.leap\n");
        printf("2.timeconvert\n");
        printf("3.exit\n");
        printf("=>");
        scanf("%d", &choice);
        if(choice != 3)
        {
            switch(choice)
            {
                case 1:
                    printf("Enter year:");
                    scanf("%d", &year);
                    leapYear(year);
                    break;
                case 2:
                    printf("Enter hh:mm:ss ");
                    scanf("%d:%d:%d", &hh, &mm, &ss);
                    printf("%02d:%02d:%02d = %d seconds\n", hh, mm, ss, TimeCon(hh, mm, ss));
                    break;
            }
        }else{
            break;
        }
    }
    return 0;
}
