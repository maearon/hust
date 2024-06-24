// Đề bài:

// Chương trình đang có một vài lỗi sinh viên cần tìm, sửa các lỗi và chạy lại chương trình.



// Mô tả giá trị đầu vào

// - Số nguyên a

// - Số nguyên b

// - Số nguyên c

// Mô tả giá trị đầu ra

// - Tổng a b c

// - Trung bình cộng a b c

// Ví dụ

// Input: 

// 1

// 2

// 3

// Output :

// 6

// 2.000000
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float t =  a + b + c;
    printf("%d\n", t);
    printf("%.6lf\n", t/3.0);
    return 0;
}
