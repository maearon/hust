// Bài 4.3 Lập chương trình thực hiện các công việc sau:
//  Nhập một số nguyên dương bất kỳ nhỏ hơn 1000
//  Tính tổng các chữ số của số đó. Ví dụ: số 123 có tổng các chữ số là 1+2+3=6.
//  Thông báo kết quả ra màn hình.
// Chú ý:
//  Sử dụng vòng lặp while để làm
//  Nếu giá trị nhập vào lớn hơn hoặc bằng 1000 thì in ra màn hình ERROR.
// Input
// Số nguyên n < 1000
// Output
// Tổng các chữ số của số nguyên n

#include <stdio.h>

int main() {
    int n, sum_digits = 0, original_n;
    
    printf("Nhap vao mot so nguyen n (n < 1000): ");
    scanf("%d", &n);
    
    if (n >= 1000) {
        printf("ERROR\n");
        return 0;
    }
    
    original_n = n; // Store the original value of n
    
    while (n > 0) {
        sum_digits += n % 10; // Add the last digit to sum_digits
        n /= 10; // Remove the last digit from n
    }
    
    printf("Tong cac chu so cua so nguyen %d la: %d\n", original_n, sum_digits);
    
    return 0;
}
