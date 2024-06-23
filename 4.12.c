// Viet chuong trinh nhap vao so duong x va so nguyen duong n tinh S=1-x+x^2/2!-x^3/3!+...+(-1)^n*x^n/n!, neu n<1 hoac x <0 in Error, Input: nguyen duong n va so thuc x, Output: S 0.0000 vi du n=1 x=1
#include <stdio.h>
#include <math.h>

int main() {
    double x, s = 0.0;
    int n, i;
    double fac = 1.0; // factorial of i initialized to 1

    scanf("%lf %d", &x, &n);

    if (n < 1 || x < 0) {
        printf("Error\n");
        return 1;
    }

    for (i = 0; i <= n; ++i) {
        if (i > 0) {
            fac *= i; // update factorial for each i
        }

        if (i % 2 == 0) {
            s += pow(-x, i) / fac; // add current term to s
        }
    }

    printf("%.4lf\n", s);

    return 0;
}
