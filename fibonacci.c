#include <stdio.h>
#include <stddef.h>

#define N 20

int main(void)
{
    unsigned int x1 = 0, x2 = 1, x3;

    for (size_t i = N - 2; i != 0; --i)
    {
        printf("%u, ", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }

    printf("%u, ", x1);
    printf("%u", x2);

    return 0;
}
