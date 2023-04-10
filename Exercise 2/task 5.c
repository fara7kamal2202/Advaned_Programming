#include <stdio.h>


int main(void)
{
    short mm, dd, yyyy; 

    printf("Enter a date(mm/dd/yyyy):");
    scanf("%hd/%hd/%hd", &mm, &dd, &yyyy);

    printf("You entered the date %.4hd%.2hd%.2hd", yyyy, mm, dd);


    return 0;
}