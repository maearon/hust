// Đề bài:

// Chương trình đang có 1 vài lỗi sinh viên cần tìm, sửa các lỗi và chạy lại chương trình.



// Mô tả giá trị đầu vào

// - Số thực x

// - Số thực y

// Mô tả giá trị đầu ra

// - Số bé hơn

// Ví dụ

// Input: 

// 1

// 2

// Output :

// 1.00


// Đáp án:(penalty regime: 0 %)
#include <stdio.h>
int main() {
    float x,y;
    scanf("%f%f", &x, &y);
    printf("%.2f\n", x < y ? x : y);
    return 0;
}
