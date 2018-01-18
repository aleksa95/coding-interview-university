#include <stdio.h>

// Count characters in input
int main()
{
    double nc;

    printf("%d", getchar() != EOF);

    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}
