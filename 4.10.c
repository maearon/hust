// Viet chuong trinh nhap vao so duong x va so nguyen duong n tinh S=1+x+x^2/2+x^3/3+...+x^n/n, neu n<1 hoac x <0 in Error, Input: nguyen duong n va so thuc x, Output: S 2.0000 vi du n=1 x=1
#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int n;
    scanf("%f%d", &x, &n);

    if (x < 0 || n < 1) {
        printf("Error\n");
        return 1;
    }

    float S = 1.0; // Initialize S with the first term of the series which is 1
    float term = x; // The current term, starting with x

    for (int i = 1; i <= n; i++) {
        S += term / i; // Add the current term divided by its position
        term *= x; // Update term to the next power of x (x^i for the next iteration)
    }

    printf("%.4f\n", S);
    return 0;
}
