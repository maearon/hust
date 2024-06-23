// Bài 4.2 Số nguyên tố là một số nguyên dương chỉ chia hết cho 1 và chính nó. Viết
// chương trình nhập một số nguyên n 
// từ bàn phím, kiểm tra xem số nguyên n
// đó có phải
// là số nguyên tố hay không và thông báo ra màn hình.
// Input: Số nguyên n,
// Output
// La so nguyen to
// Khong phai la so nguyen to

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // n <= 1 is not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // multiples of 2 and 3 are not prime
    }
    
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // if divisible by i or i+2, not prime
        }
        i += 6; // increment by 6, i+2 is the next potential divisor
    }
    
    return 1; // no divisors found, prime number
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("La so nguyen to\n");
    } else {
        printf("Khong phai la so nguyen to\n");
    }
    
    return 0;
}
