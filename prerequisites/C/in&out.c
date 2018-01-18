#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("%3d %6d", c, EOF);
    }
}
