// Đề bài:
// Nhập mảng 𝑛 số nguyên bất kỳ từ bàn phím. Sắp xếp dãy số theo thứ tự tăng dần và đưa kết quả ra màn hình (Mỗi phần tử cách nhau một dấu cách).
// Mô tả giá trị đầu vào:
// - Dòng đầu tiên cho biết số phần tử mảng 𝑛.
// - Dòng thứ 2 chứa giá trị của 𝑛 phần tử mảng, mỗi phần tử cách nhau một dấu cách.
// Mô tả giá trị đầu ra:
// Các phần tử in ra thành 1 dòng, cách nhau 1 dấu cách. 
// For example:

// Dữ liệu đầu vào	Kết quả
// 5
// 1 4 3 5 2
// 1 2 3 4 5
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    // Read the number of elements
    scanf("%d", &n);
    
    // Declare the array with n elements
    int arr[n];
    
    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array using bubble sort
    bubbleSort(arr, n);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}

