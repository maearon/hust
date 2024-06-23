// Viet chuong trinh nhap vao nguyen duong n va so thuc x tinh S=1+x/1!+x^2/2!+x^3/3!+...+x^n/n!, neu du lieu dau vao khong dung in Error, Input: nguyen duong n va so thuc x, Output: S 2.500000 vi du n=1 x=1.5
#include <stdio.h>
#include <math.h>

// Function to compute factorial of a number
double factorial(int num) {
    double fact = 1.0;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

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
        S += pow(x, i) / factorial(i);
    }

    // Print the result with six decimal places
    printf("%.6lf\n", S);
    return 0;
}
