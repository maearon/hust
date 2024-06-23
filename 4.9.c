//It seems there was a misunderstanding in the implementation of the nested square root calculation. Let's clarify and correctly implement the function.

// Nested Square Root Calculation
// Given x and n, the correct calculation should be as follows:

// For n = 1, the output is sqrt(x)
// For n = 2, the output is sqrt(x + sqrt(x))
// For n = 3, the output is sqrt(x + sqrt(x + sqrt(x)))
// and so on...
// Let's correct the implementation:

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    scanf("%lf%d", &x, &n);

    if (x < 0 || n < 1) {
        printf("Error\n");
        return 1;
    }

    double S = 0.0; // Initialize with 0 to start the nested square roots
    for (int i = 0; i < n; i++) {
        S = sqrt(x + S);
    }

    printf("%.4lf\n", S);
    return 0;
}
