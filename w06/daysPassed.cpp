#include <stdio.h>
#include <ctype.h>

int leapYear(int year);

int leapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i;
    int month, day;
    int days = 0;
    char cont = 'Y';
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;
    while(cont == 'Y')
    {
        days = 0;
        int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        printf("Enter year month day:");
        scanf("%d %d %d", &year, &month, &day);
        if(leapYear(year) == 1)
        {
            m[1]++;
        }
        for(i = 0; i < month - 1; i++)
        {
            days += m[i];
        }
        printf("%d days passsed since 1/1/%d\n", days + day, year);
        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
    }
    return 0;
}
