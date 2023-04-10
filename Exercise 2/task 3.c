#include <stdio.h>

int main(void)
{
    int i = 1, j = 2, A = 0; 

    // A = 0, i = 3, j = 2
    i += j;
    printf("A = %d\ti = %d\tj = %d\n", A, i, j);

    // A = 3, i = 2, j = 2
    A = i--;
    printf("A = %d\ti = %d\tj = %d\n", A, i, j);

    // A = 2, i = 2, j = 2
    A = i * j / i;
    printf("A = %d\ti = %d\tj = %d\n", A, i, j);

    // A =2 , i = 2, j = 3
    A = i % ++j;
    printf("A = %d\ti = %d\tj = %d\n", A, i, j);

    return 0;
}