#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void convertAndDisplay(int num, int currentBase);
void convertSingle(int num, char choice, int currentBase);
void explainConversion(int num, char choice);
int detectBase(const char* str);
int convertToDecimal(const char* str, int base);

int main() {
    char input[100];
    int num;
    int base;
    char choice;
    char conversionChoice;

    while (1) {
        printf("Nhập một số: ");
        scanf("%s", input);

        base = detectBase(input);
        if (base == -1) {
            printf("Định dạng số không hợp lệ. Vui lòng thử lại.\n");
            continue;
        }

        num = convertToDecimal(input, base);
        printf("Số bạn đã nhập: %s (Hệ %d)\n", input, base);

        while (1) {
            printf("Chọn chuyển đổi:\n");
            if (base != 2) printf("1. Chuyển sang Nhị phân\n");
            if (base != 8) printf("2. Chuyển sang Bát phân\n");
            if (base != 10) printf("4. Chuyển sang Thập phân\n");
            if (base != 16) printf("5. Chuyển sang Thập lục phân\n");
            printf("6. Chuyển sang Tất cả\n");
            printf("7. Thoát\n");
            printf("Nhập lựa chọn của bạn: ");
            scanf(" %c", &choice);

            switch (choice) {
                case '1':
                case '2':
                case '4':
                case '5':
                    convertSingle(num, choice, base);
                    explainConversion(num, choice);
                    break;
                case '6':
                    convertAndDisplay(num, base);
                    printf("\nGiải thích cách chuyển đổi:\n");
                    explainConversion(num, '1'); // Explain for Binary
                    explainConversion(num, '2'); // Explain for Octal
                    explainConversion(num, '4'); // Explain for Decimal
                    explainConversion(num, '5'); // Explain for Hexadecimal
                    break;
                case '7':
                    exit(0);
                default:
                    printf("Lựa chọn không hợp lệ! Vui lòng thử lại.\n");
            }

            printf("\nBạn có muốn chuyển đổi số khác không? (y/n): ");
            scanf(" %c", &conversionChoice);
            if (conversionChoice == 'y' || conversionChoice == 'Y') {
                break;
            } else {
                exit(0);
            }
        }
    }

    return 0;
}

void convertAndDisplay(int num, int currentBase) {
    if (currentBase != 2) {
        printf("Nhị phân: ");
        for (int i = 31; i >= 0; i--) {
            printf("%d", (num >> i) & 1);
        }
        printf("\n");
    }
    if (currentBase != 8) {
        printf("Bát phân: %o\n", num);
    }
    if (currentBase != 10) {
        printf("Thập phân: %d\n", num);
    }
    if (currentBase != 16) {
        printf("Thập lục phân: %X\n", num);
    }
}

void convertSingle(int num, char choice, int currentBase) {
    switch (choice) {
        case '1':
            printf("Nhị phân: ");
            for (int i = 31; i >= 0; i--) {
                printf("%d", (num >> i) & 1);
            }
            printf("\n");
            break;
        case '2':
            printf("Bát phân: %o\n", num);
            break;
        case '4':
            printf("Thập phân: %d\n", num);
            break;
        case '5':
            printf("Thập lục phân: %X\n", num);
            break;
        default:
            printf("Lựa chọn không hợp lệ!\n");
    }
}

void explainConversion(int num, char choice) {
    switch (choice) {
        case '1':
            printf("Chuyển đổi sang Nhị phân:\n");
            printf("1. Chia số %d cho 2 và ghi lại phần dư.\n", num);
            printf("2. Lặp lại cho đến khi số chia là 0, ghi lại tất cả các phần dư.\n");
            printf("3. Đọc các phần dư theo thứ tự ngược lại để có số nhị phân.\n");
            printf("Ví dụ: Để chuyển số 654 (thập phân) sang nhị phân:\n");
            printf("654 ÷ 2 = 327 dư 0\n");
            printf("327 ÷ 2 = 163 dư 1\n");
            printf("163 ÷ 2 = 81 dư 1\n");
            printf("81 ÷ 2 = 40 dư 1\n");
            printf("40 ÷ 2 = 20 dư 0\n");
            printf("20 ÷ 2 = 10 dư 0\n");
            printf("10 ÷ 2 = 5 dư 0\n");
            printf("5 ÷ 2 = 2 dư 1\n");
            printf("2 ÷ 2 = 1 dư 0\n");
            printf("1 ÷ 2 = 0 dư 1\n");
            printf("Số nhị phân là: 1000001110\n");
            break;
        case '2':
            printf("Chuyển đổi sang Bát phân:\n");
            printf("1. Chia số %d cho 8 và ghi lại phần dư.\n", num);
            printf("2. Lặp lại cho đến khi số chia là 0, ghi lại tất cả các phần dư.\n");
            printf("3. Đọc các phần dư theo thứ tự ngược lại để có số bát phân.\n");
            printf("Ví dụ: Để chuyển số 654 (thập phân) sang bát phân:\n");
            printf("654 ÷ 8 = 81 dư 6\n");
            printf("81 ÷ 8 = 10 dư 1\n");
            printf("10 ÷ 8 = 1 dư 2\n");
            printf("1 ÷ 8 = 0 dư 1\n");
            printf("Số bát phân là: 1216\n");
            break;
        case '4':
            printf("Chuyển đổi sang Thập phân:\n");
            printf("1. Nhân mỗi chữ số với lũy thừa của cơ số và cộng tất cả các kết quả.\n");
            printf("2. Ví dụ: Để chuyển số 654 (hệ 10) sang thập phân:\n");
            printf("654 là số đã ở hệ 10, không cần chuyển đổi thêm.\n");
            printf("Số thập phân là: 654\n");
            break;
        case '5':
            printf("Chuyển đổi sang Thập lục phân:\n");
            printf("1. Chia số %d cho 16 và ghi lại phần dư.\n", num);
            printf("2. Lặp lại cho đến khi số chia là 0, ghi lại tất cả các phần dư.\n");
            printf("3. Đọc các phần dư theo thứ tự ngược lại để có số thập lục phân.\n");
            printf("Ví dụ: Để chuyển số 654 (thập phân) sang thập lục phân:\n");
            printf("654 ÷ 16 = 40 dư 14 (E)\n");
            printf("40 ÷ 16 = 2 dư 8\n");
            printf("2 ÷ 16 = 0 dư 2\n");
            printf("Số thập lục phân là: 28E\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ!\n");
    }
}

int detectBase(const char* str) {
    if (str[0] == '0') {
        if (tolower(str[1]) == 'x') return 16; // Hexadecimal
        if (isdigit(str[1])) return 8;        // Octal
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]) && !isxdigit(str[i])) {
            return -1; // Invalid format
        }
    }
    return 10; // Decimal
}

int convertToDecimal(const char* str, int base) {
    return strtol(str, NULL, base);
}
