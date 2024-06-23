// Bài 4.4 Viết chương trình thực hiện các công việc sau:
//  Nhập 2 số nguyên dương a,b bất kỳ
//  Tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 2 số đó
//  Hiển thị kết quả ra màn hình
// Chú ý:
//  Sử dụng vòng lặp while để làm
//  Kiểm tra dữ liệu đầu vào của chương trình, nếu không đúng thì kết thúc chương
// trình và in ra màn hình ERROR.
// TÀI LIỆU HƯỚNG DẪN THỰC HÀNH
// TIN HỌC ĐẠI CƯƠNG - IT1110
// © 2022 – HUST – SOICT32
// Input
// Số nguyên dương a
// Số nguyên dương b
// Output
// Ước số chung lớn nhất
// Bội số chung nhỏ nhất

#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    // Input two positive integers a and b
    printf("Nhap vao hai so nguyen duong a va b: ");
    scanf("%d %d", &a, &b);
    
    // Check if a and b are positive
    if (a <= 0 || b <= 0) {
        printf("ERROR\n");
        return 0;
    }
    
    // Calculate GCD and LCM
    int gcd_ab = gcd(a, b);
    int lcm_ab = (a * b) / gcd_ab;
    
    // Output the results
    printf("Ước số chung lớn nhất của %d và %d là: %d\n", a, b, gcd_ab);
    printf("Bội số chung nhỏ nhất của %d và %d là: %d\n", a, b, lcm_ab);
    
    return 0;
}
