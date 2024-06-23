// Bài 4.5 Lập chương trình thực hiện các công việc sau:
//  Nhập 3 số thực a,b,c bất kì.
//  Giải và biện luận phương trình bậc 2: ax2 + bx + c = 0
// Lưu ý tính cả trường hợp a = 0 và trường hợp nghiệm phức.
// Chú ý:
//  Nếu phương trình vô nghiệm thì in ra màn hình: Phuong trinh vo nghiem
//  Nếu phương trình vô số nghiệm thì in ra màn hình: Phuong trinh vo so
// nghiem
//  Nếu phương trình có 2 nghiệm phân biệt thì hiển thị nghiệm lớn trước rồi mới
// đến nghiệm bé.
// Input
// Số thực a
// Số thực b
// Số thực c
// Output
// Kết quả

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2, real_part, imag_part;

    // Input values
    printf("Enter coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if a is zero (not a quadratic equation)
    if (a == 0) {
        printf("This is not a quadratic equation (a must be non-zero).\n");
        return 1;
    }

    // Calculate discriminant
    delta = b * b - 4 * a * c;

    // Determine the number of solutions
    if (delta > 0) {
        // Two distinct real roots
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("x1 = %.6lf\n", x1);
        printf("x2 = %.6lf\n", x2);
    } else if (delta == 0) {
        // One real root (double root)
        x1 = -b / (2 * a);
        printf("One real root (double root):\n");
        printf("x = %.6lf\n", x1);
    } else {
        // Complex roots
        real_part = -b / (2 * a);
        imag_part = sqrt(fabs(delta)) / (2 * a);
        printf("Two complex roots:\n");
        printf("x1 = %.6lf + %.6lfi\n", real_part, imag_part);
        printf("x2 = %.6lf - %.6lfi\n", real_part, imag_part);
    }

    return 0;
}
