// Viet chuong trinh nhap vao nguyen duong n va so thuc x tinh S=1+x^1+...+x^n, neu du lieu dau vao khong dung in ERROR, Input: nguyen duong n va so thuc x, Output: S 2.500000 vi du n=1 x=1.5
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, S = 1.0; // Start S with 1.0 to include the initial 1 in the sum
    scanf("%d%lf", &n, &x);
    
    if (n <= 0) {
        printf("Error\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        S += pow(x, i);
    }
    
    printf("%.6lf\n", S);
    return 0;
}
