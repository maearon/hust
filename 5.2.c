// Đề bài:

// Nhập mảng số nguyên từ bàn phím. Tính trung bình cộng các số âm, tổng các số dương và đưa kết quả ra màn hình.

// Mô tả giá trị đầu vào:
// - Dòng đầu tiên cho biết số phần tử mảng 𝑛.
// - Dòng thứ 2 chứa giá trị của n phần tử mảng, các phần tử cách nhau một dấu cách.

// Mô tả giá trị đầu ra:
// Một dòng gồm 2 giá trị cách nhau 1 dấu cách: (mỗi kết quả hiển thị số thực đến 6 số đằng sau dấu phảy)
// - Giá trị trung bình cộng các số âm, nếu mảng không có số âm thì in ra "Mang khong co so am"
// - Giá trị tổng các số dương, nếu mảng không có số dương nào thì in ra: "Mang khong co so duong"

// Ví dụ: 

// Đầu vào:

// 3

// 1 2 3

// Đầu ra:

// Mang khong co so am 6.000000


// For example:

// Dữ liệu đầu vào	Kết quả
// 2
// 295 -492
// -492.000000 295.000000
// 5
// 1 2 3 4 5
// Mang khong co so am 15.000000
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    double sum_negative = 0;
    double sum_positive = 0;
    int count_negative = 0;
    int count_positive = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            sum_negative += arr[i];
            count_negative++;
        } else if (arr[i] > 0) {
            sum_positive += arr[i];
            count_positive++;
        }
    }

    if (count_negative > 0) {
        printf("%.6f ", sum_negative / count_negative);
    } else {
        printf("Mang khong co so am ");
    }

    if (count_positive > 0) {
        printf("%.6f\n", sum_positive);
    } else {
        printf("Mang khong co so duong\n");
    }

    return 0;
}

