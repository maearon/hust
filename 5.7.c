// Đề bài: 


// Viết chương trình thực hiện công việc sau:
// Nhập vào từ bàn phím một câu tiêu đề bài báo bất kỳ.
// Chuẩn hóa xâu đã nhập bằng cách xóa các dấu cách thừa ở đầu, cuối, giữa để đảm bảo chỉ có 1 dấu cách phân tách giữa các từ.
// Đưa câu tiêu đề đã được chuẩn hóa ra màn hình.
// Mô tả giá trị đầu vào:
// Câu tiêu đề được nhập thành 1 dòng từ bàn phím.
// Mô tả giá trị đầu ra:
// Câu đã chuẩn hóa in ra thành 1 dòng với quy cách <nội dung>

// For example:

// Dữ liệu đầu vào:	
// h  ell  o, Kết quả:
// h ell o
// Đáp án:(penalty regime: 0 %)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

void normalizeString(char *str) {
    int len = strlen(str);
    int i, j;

    // Remove leading spaces
    while (isspace(str[0])) {
        memmove(str, str + 1, len);
        len--;
    }

    // Remove trailing spaces
    while (len > 0 && isspace(str[len - 1])) {
        str[len - 1] = '\0';
        len--;
    }

    // Normalize spaces between words
    for (i = 0; i < len; i++) {
        if (isspace(str[i])) {
            // Skip all subsequent spaces
            while (isspace(str[i + 1])) {
                memmove(&str[i + 1], &str[i + 2], len - i);
                len--;
            }
        }
    }
}

int main() {
    char title[MAX_LEN];

    // Read the title from input
    fgets(title, MAX_LEN, stdin);

    // Normalize the title string
    normalizeString(title);

    // Print the normalized title
    printf("%s\n", title);

    return 0;
}

