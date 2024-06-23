#include <stdio.h>
void main() {
    double X, Y;
    scanf("%lf%lf", &X, &Y);
    printf("%.6lf\n%.6lf\n%.6lf\n", X * X + Y * Y, (X + Y) * (X + Y), (X - Y) * (X - Y));
    // return 0;
}
