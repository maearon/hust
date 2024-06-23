#include <stdio.h>

int main() {
    float x, y, max;
    scanf("%f", &x);
    scanf("%f", &y);
    max = x;
    if (y > x) {
        max = y;
    }
    printf("%6.2f\n", max);
    return 0;
}
