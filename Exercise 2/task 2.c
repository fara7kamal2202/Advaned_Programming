#include <stdio.h>


int main(void)
{
    int i = 7, j = 8;
    double x = 3.141, y = 2;

    //63
    i *= j+1;
    printf("%d\n", i);

    //12.282
    x = 3*y+y*x;
    printf("%g\n", x);

    return 0;
}