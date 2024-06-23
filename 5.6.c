// Đề bài: 

// Viết chương trình đọc hai chuỗi S và T. Đếm số lần mỗi ký tự xuất hiện trong cả hai chuỗi.

// Chú ý:

// Đầu tiên xuất một chuỗi các ký tự riêng biệt trong cả hai chuỗi. Sau đó, đối với mỗi ký tự đó hiển thị ra số lần xuất hiện trong cả hai chuỗi.


// Mô tả giá trị đầu vào:
// Chuỗi S
// Chuỗi T
// Mô tả giá trị đầu ra:
// Một chuỗi các ký tự riêng biệt xuất hiện trong S hoặc T. (Sắp xếp các ký tự này theo thứ tự tăng dần theo giá trị ASCII của chúng).
// Trên mỗi dòng là số lần xuất hiện của một ký tự (theo thứ tự trong chuỗi trên dòng 1).


// For example:

// Dữ liệu đầu vào:	
// b
// a, Kết quả:
// ab
// 1
// 1
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

// Function to print character counts in sorted order
void printCharacterCounts(int countS[], int countT[]) {
    int seen[256] = {0}; // Array to keep track of seen characters

    // Mark characters seen in S
    for (int i = 0; i < 256; i++) {
        if (countS[i] > 0) {
            seen[i] = 1;
        }
    }

    // Mark characters seen in T
    for (int i = 0; i < 256; i++) {
        if (countT[i] > 0) {
            seen[i] = 1;
        }
    }

    // Print unique characters in both strings sorted by ASCII value
    for (int i = 0; i < 256; i++) {
        if (seen[i]) {
            printf("%c", i); // Print character
        }
    }
    printf("\n");

    // Print counts of characters in both strings
    for (int i = 0; i < 256; i++) {
        if (seen[i]) {
            printf("%d\n", countS[i] + countT[i]); // Print count
        }
    }
}

int main() {
    char S[MAX_LEN], T[MAX_LEN];
    int countS[256] = {0}; // Array to count characters in S
    int countT[256] = {0}; // Array to count characters in T

    // Read strings S and T
    fgets(S, MAX_LEN, stdin);
    fgets(T, MAX_LEN, stdin);

    // Calculate character frequencies in S
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] != '\n') {
            countS[S[i]]++;
        }
    }

    // Calculate character frequencies in T
    for (int i = 0; i < strlen(T); i++) {
        if (T[i] != '\n') {
            countT[T[i]]++;
        }
    }

    // Print character counts in sorted order
    printCharacterCounts(countS, countT);

    return 0;
}
