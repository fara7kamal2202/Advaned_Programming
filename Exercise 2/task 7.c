#include <stdio.h>


int main(void)
{
    short minutes, hours;

    printf("Enter number of hours: ");
    scanf("%hd", &hours);
    printf("Enter number of minutes: ");
    scanf("%hd", &minutes);
 
    printf("%hd hours %hd minutes = ", hours, minutes);

    minutes += hours * 60;
    hours = 0;

    printf("%hd minutes", minutes);

    return 0;
}