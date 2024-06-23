// Viet chuong trinh nhap vao nguyen duong n va so thuc x tinh S=1-x+x^2-x^3...+(-1)^n x x^n, neu du lieu dau vao khong dung in Error, Input: nguyen duong n va so thuc x, Output: S -0.500000 vi du n=1 x=1.5
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, S = 1.0; // Initialize S to 1.0 to account for the initial 1 in the series

    // Read inputs for n and x
    if (scanf("%d%lf", &n, &x) != 2 || n <= 0) {
        printf("Error\n");
        return 1;
    }

    // Compute the series S
    for (int i = 1; i <= n; i++) {
        S += pow(-1, i) * pow(x, i);
    }

    // Print the result with six decimal places
    printf("%.6lf\n", S);
    return 0;
}
