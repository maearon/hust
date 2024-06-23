#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("%.6f\n", ( ( x + y + z ) / ( x * x + y * y + 1 ) ) - fabs(x - z * cos(y)) );
    return 0;
}
