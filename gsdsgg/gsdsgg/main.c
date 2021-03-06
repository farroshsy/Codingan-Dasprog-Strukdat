#include <stdio.h>

int main(void)
{
    int day, mon, year, days_in_feb = 28,
            doy;   

    printf("Enter date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon, &day, &year);

    doy = day;

    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        days_in_feb = 29;
    }

    switch(mon)
    {
        case 2:
            doy += 31;
            break;
        case 3:
            doy += 31+days_in_feb;
            break;
        case 4:
            doy += 31+days_in_feb+31;
            break;
        case 5:
            doy += 31+days_in_feb+31+30;
            break;
        case 6:
            doy += 31+days_in_feb+31+30+31;
            break;
        case 7:
            doy += 31+days_in_feb+31+30+31+30;
            break;
        case 8:
            doy += 31+days_in_feb+31+30+31+30+31;
            break;
        case 9:
            doy += 31+days_in_feb+31+30+31+30+31+31;
            break;
        case 10:
            doy += 31+days_in_feb+31+30+31+30+31+31+30;
            break;
        case 11:
            doy += 31+days_in_feb+31+30+31+30+31+31+30+31;
            break;
        case 12:
            doy += 31+days_in_feb+31+30+31+30+31+31+30+31+30;
            break;
    }

    printf("Day of year: %d", doy);

    return 0;
}
