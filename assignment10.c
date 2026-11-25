#include <stdio.h>

int main()
{
    int year, days, start, i, j, month;
    int total = 0;
    int monthDays[] = {31,28,31,30,31,30,
                       31,31,30,31,30,31};
    char *months[] = {"January", "February", "March",
                      "April", "May", "June",
                      "July", "August", "September",
                      "October", "November", "December"};
    printf("Enter year: ");
    scanf("%d", &year);
    // Check for leap year
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        monthDays[1] = 29;
    // Calculate the starting day of the year
    for(i = 1; i < year; i++)
    {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            total += 366;
        else
            total += 365;
    }
    start = (total + 1) % 7;
    // Print all 12 months
    for(month = 0; month < 12; month++)
    {
        printf("\n\n       %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");
        // Print initial spaces
        for(i = 0; i < start; i++)
            printf("    ");
        days = monthDays[month];
        // Print dates
        for(j = 1; j <= days; j++)
        {
            printf("%3d ", j);
            if((j + start) % 7 == 0)
                printf("\n");
        }
        start = (start + days) % 7;
    }
    return 0;
}
