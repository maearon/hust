#include <stdio.h>

int main() {
    double price_no_tax, weight, tax, total_price;
    scanf("%lf%lf%lf", &price_no_tax, &weight, &tax);
    total_price = price_no_tax * weight * (1 + tax / 100);
    printf("%.6lf\n", total_price);
    return 0;
}
