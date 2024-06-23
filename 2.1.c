#include <stdio.h>

int main() {
    float a, b, min;
    scanf("%f", &a);
    scanf("%f", &b);
    min = b;
    if (a < b) {
        min = a;
    }
    printf("%.2f\n", min);
    return 0;
}
