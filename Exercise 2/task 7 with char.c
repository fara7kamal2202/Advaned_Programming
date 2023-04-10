#include <stdio.h>


int main(void)
{
    char minutes, hours;

    printf("Enter number of hours: ");
    scanf("%d", &hours);
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    printf("%d hours %d minutes = ", hours, minutes);

    minutes += hours * 60;
    hours = 0;

    printf("%d minutes", minutes);

    return 0;
}