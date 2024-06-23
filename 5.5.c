// Đề bài: 

// Viết chương trình cho phép nhập vào 1 mảng số nguyên (tối đa 10 phần tử), in ra màn hình tổng của 2 phần tử liên tiếp lớn nhất. Nếu mảng chỉ có 1 phần tử trả về kết quả là 0. Nếu tổng lớn nhất là một số âm thì trả về 0.


// Mô tả giá trị đầu vào:
// - Dòng đầu tiên chứa số nguyên n: số phần tử của mảng (2 <= n <=10)

// - Dòng thứ 2 chứa danh sách các số cách nhau khoảng trắng
// Mô tả giá trị đầu ra:
// Tổng 2 phần tử liên tiếp lớn nhất.



// For example:

// Dữ liệu đầu vào	Kết quả
// 5
// 1 9 3 2 6
// 12
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    
    // Check if the number of elements is within the allowed range
    if (n < 2 || n > 10) {
        printf("0\n");
        return 0;
    }
    
    int arr[n];
    
    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize the maximum sum to a very low value
    int max_sum = arr[0] + arr[1];
    
    // Calculate the maximum sum of two consecutive elements
    for (int i = 1; i < n - 1; i++) {
        int sum = arr[i] + arr[i + 1];
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    
    // If the maximum sum is negative, return 0
    if (max_sum < 0) {
        max_sum = 0;
    }
    
    // Print the maximum sum
    printf("%d\n", max_sum);
    
    return 0;
}

