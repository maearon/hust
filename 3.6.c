#include <stdio.h>
#include <math.h>

int main() {
    double X, Y;
    scanf("%lf%lf", &X, &Y);
    printf("%.6lf\n", pow(Y, 6) + X * pow(Y, 5) + pow(X, 2) * pow(Y, 4) + pow(X, 3) * pow(Y, 3)
    + pow(X, 4) * pow(Y, 2) + pow(X, 5) * Y + pow(X, 6));
    return 0;
}

# include<stdio.h>
# include<math.h>
int main(void) {
    double X, Y, S=0.0;
    scanf("%lf%lf", &X, &Y);
    for (int i=0;i<=6;i++) {
        S+=pow(Y,6-i)*pow(X,i);
    }
    printf("%.6lf\n", S);
    return 0;
}
