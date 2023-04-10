#include <stdio.h>


int main(void)
{
    short minutes, hours;

    printf("Enter number of minutes: ");
    scanf("%hd", &minutes);
    printf("%hd minutes = ", minutes);

    hours = minutes / 60;
    minutes %= 60;

    printf("%hd hours %hd minutes", hours, minutes);

    return 0;
}