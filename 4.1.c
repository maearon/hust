// Bài 4.1 Viết chương trình
//  Nhập vào số nguyên n < 8 bất kỳ.
//  Tính giai thừa của n(n!)

// .
// Chú ý:
//  Sử dụng vòng lặp for để giải quyết bài toán.
//  Nếu dữ liệu đầu vào không đúng mô tả của đề bài, hiển thị ra màn hình
// "ERROR".
// Input: Số nguyên n,  Kết quả n!

// #include <stdio.h>

// int main() {
//     int n;
//     unsigned long long factorial = 1; // Use unsigned long long to store large factorials
    
//     printf("Nhap vao so nguyen n (< 8): ");
//     if (scanf("%d", &n) != 1 || n >= 8 || n < 0) {
//         printf("ERROR\n");
//         return 1;
//     }
    
//     // Calculate factorial of n
//     for (int i = 1; i <= n; ++i) {
//         factorial *= i;
//     }
    
//     printf("%d! = %llu\n", n, factorial);
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int i,n,gt=1;
    scanf("%d", &n);
    if (n < 0 || n > 7) {
      printf("ERROR");
    } else {
      for (int i = 1; i <= n; ++i) gt*=i;
      printf("%d\n", gt);
    }
    return 0;
}
