#include <stdio.h>
#define PI 3.14159
int main() {
    double r;
    // double r, M, S;
    // const double PI = 3.14159;
    scanf("%lf", &r);
    if (r <= 0) {
        printf("ERROR");
        // return 1;
    } else {
        printf("%.6lf\n", 2 * PI * r);
        printf("%.6lf\n", PI * r * r);
        // return 0;
    }
}
