// Đề bài:

// Nhập mảng n số nguyên từ bàn phím, in ra màn hình các giá trị từ cuối đến giá trị đầu, sau đó tính tổng các phần tử của mảng.

// Chú ý:

// Nếu n <= 0 in "Error"

// Mô tả giá trị đầu vào:

// Dòng đầu tiên chứa số nguyên dương n và là độ dài của mảng đầu vào.
// Dòng thứ hai chứa n số nguyên.
// Mô tả giá trị đầu ra:

// Dòng đầu tiên là các phần tử của mảng được in theo thứ tự đảo ngược.
// Dòng đầu ra thứ hai là tổng các phần tử của mảng

// For example:

// Dữ liệu đầu vào	Kết quả
// 5
// 1 2 3 4 5
// 5 4 3 2 1
// 15
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error\n");
        return 1;
    }

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", sum);

    return 0;
}

