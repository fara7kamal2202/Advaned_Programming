#include <stdio.h>


int main(void)
{
    // * will represent white space
    // ****86 1040
    printf("%6d %4d\n", 86, 1040);

    // ****30.25300
    printf("%12.5f\n", 30.253);

    // 83.1620
    printf("%.4f\n", 83.162 );

    // 0.00**
    printf("%-6.2f\n", .0000009979 );

    return 0;
}