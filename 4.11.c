// Viet chuong trinh nhap vao so duong x va so nguyen duong n tinh S=1+x+x^2/2!+x^3/3!+...+x^n/n!, neu n<1 hoac x <0 in Error, Input: nguyen duong n va so thuc x, Output: S 2.0000 vi du n=1 x=1
#include <stdio.h>

int main() {
    double x;
    int n;
    scanf("%lf%d", &x, &n);

    if (x < 0 || n < 1) {
        printf("Error\n");
        return 1;
    }

    double S = 1.0; // Initialize S with the first term of the series which is 1
    double term = x; // The current term, starting with x
    double factorial = 1.0; // Initialize factorial to 1

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calculate i!
        S += term / factorial; // Add the current term divided by its factorial
        term *= x; // Update term to the next power of x (x^i for the next iteration)
    }

    printf("%.4lf\n", S);
    return 0;
}
