#include <stdio.h>

int main() {
    int a, b, c, tong;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    tong = a + b + c;
    printf("%d\n", tong);
    printf("%.6f\n", (float)tong / 3.0);
    return 0;
}
