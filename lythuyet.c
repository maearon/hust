// https://manual.cs50.io/

// https://www.geeksforgeeks.org/format-specifiers-in-c/

// sudo apt update
// sudo apt install gcc
// gcc 4.1.c -o 4.1
// ./4.1
// gcc 3.6.c -g -o 3.6 -lm
// ./3.6

//sudo apt install gdb
// (gdb) break main   # Set a breakpoint at the beginning of main
// (gdb) run          # Run the program
// (gdb) print x      # Print the value of x
// (gdb) step         # Step to the next line of code
// (gdb) next         # Go to the next line (skip function calls)

// info local 
// print name_variable

// (gdb) continue     # Continue running until the next breakpoint
// (gdb) quit         # Exit gdb

// manhng132@gmail.com

// 886P

// /*
// #include<stdio.h>
// #include<math.h>
// #define Pi 3.14159
// int main(){
// }
 
// nguyên: int %d
// thực: float %f
// double %lf
 
// scanf("%d",&a);
// printf("ERROR");
// printf("%6.2f",tong);
 
// 1. if(dk)
//         lenh;//dk dung
 
// 2. if(dk)
//         lenh1;//dk dung
//     else
//         lenh 2;//dk sai
 
// 3. if(dk)
//         {khoi lenh1;}//dk dung
//     else
//         {khoi lenh2;}//dk sai
 
// 4. while(dk)//dk dung
//         {lenh;}
 
// 5. do 
//         {lenh;}
//     while(dk);//dk dung
// 6. for(bt1;bt2;bt3)
//     {lenh;}

// ---------------------------------------------------------------------------------------------------------

// có tổng cộng 12 cặp chuyển đổi giữa các hệ số 2, 8, 10, và 16.

// Các cặp hoán vị chuyển đổi giữa các hệ số
// (2, 8)
// (2, 10)
// (2, 16)
// (8, 10)
// (8, 16)
// (10, 16)

// (8, 2) ----> 280
// (10, 2)
// (16, 2)
// (10, 8)
// (16, 8)
// (16, 10)

// ---------------------------------------------------------------------------------------------------------

// (2, 8) // nhị phân (Binary) sang bát phân (Octal) 

// Bước 1: Nhóm các chữ số nhị phân thành các nhóm 3 từ phải sang trái:
// 101 101
// (Chữ số đầu tiên không đủ 3, thêm 0: 101 101)

// Bước 2: Chuyển đổi mỗi nhóm thành một chữ số bát phân:
// 101 (binary) = 5 (octal)
// 101 (binary) = 5 (octal)

// Bảng chuyển đổi nhị phân (3 bit) sang bát phân:

// 000 (binary) = 0 (octal)
// 001 (binary) = 1 (octal)
// 010 (binary) = 2 (octal)
// 011 (binary) = 3 (octal)
// 100 (binary) = 4 (octal)
// 101 (binary) = 5 (octal)
// 110 (binary) = 6 (octal)
// 111 (binary) = 7 (octal)

// Kết quả: Số 101101 (binary) = 55 (octal)

// ---------------------------------------------------------------------------------------------------------

// (2, 10) // nhị phân (Binary) và hệ thập phân (Decimal)

// Cách chuyển:

// Nhân mỗi chữ số nhị phân với 2 mũ vị trí của nó (bắt đầu từ 0).
// Cộng tất cả các kết quả lại.
// Ví dụ: Chuyển đổi số nhị phân 101101 sang thập phân

// Sao chép mã
// 1 * 2^5 + 0 * 2^4 + 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0
// = 1 * 32 + 0 * 16 + 1 * 8 + 1 * 4 + 0 * 2 + 1 * 1
// = 32 + 0 + 8 + 4 + 0 + 1
// = 45
// Như vậy, số 101101 (binary) = 45 (decimal).

// ---------------------------------------------------------------------------------------------------------

// (2, 16) // nhị phân (Binary) sang thập lục phân (Hexadecimal)

// Cách chuyển:

// Nhóm các chữ số nhị phân thành các nhóm 4 từ phải sang trái. Nếu nhóm cuối cùng không đủ 4 chữ số, thêm các số 0 vào phía trước cho đủ.
// Chuyển đổi mỗi nhóm thành một chữ số thập lục phân.
// Bảng chuyển đổi nhị phân (4 bit) sang thập lục phân:

// scss
// Sao chép mã
// 0000 (binary) = 0 (hex)
// 0001 (binary) = 1 (hex)
// 0010 (binary) = 2 (hex)
// 0011 (binary) = 3 (hex)
// 0100 (binary) = 4 (hex)
// 0101 (binary) = 5 (hex)
// 0110 (binary) = 6 (hex)
// 0111 (binary) = 7 (hex)
// 1000 (binary) = 8 (hex)
// 1001 (binary) = 9 (hex)
// 1010 (binary) = A (hex)
// 1011 (binary) = B (hex)
// 1100 (binary) = C (hex)
// 1101 (binary) = D (hex)
// 1110 (binary) = E (hex)
// 1111 (binary) = F (hex)
// Ví dụ: Chuyển đổi số nhị phân 1101011 sang thập lục phân:

// Nhóm các chữ số nhị phân thành các nhóm 4 từ phải sang trái:
// yaml
// Sao chép mã
// 110 1011 (thêm 0 vào phía trước chữ số 110 cho đủ nhóm 4: 0110)
// 0110 1011
// Chuyển đổi mỗi nhóm thành một chữ số thập lục phân sử dụng bảng trên:
// scss
// Sao chép mã
// 0110 (binary) = 6 (hex)
// 1011 (binary) = B (hex)

// Kết quả: Số 1101011 (binary) = 6B (hex)

// ---------------------------------------------------------------------------------------------------------

// (8, 10) // bát phân (Octal) sang thập phân (Decimal)

// Cách chuyển:

// Nhân mỗi chữ số bát phân với 8 mũ vị trí của nó (bắt đầu từ 0).
// Cộng tất cả các kết quả lại.
// Ví dụ: Chuyển đổi số bát phân 157 sang thập phân

// Sao chép mã
// 1 * 8^2 + 5 * 8^1 + 7 * 8^0
// = 1 * 64 + 5 * 8 + 7 * 1
// = 64 + 40 + 7
// = 111
// Như vậy, số 157 (octal) = 111 (decimal).

// Từ thập phân (Decimal) sang bát phân (Octal)
// Cách chuyển:

// Chia số thập phân cho 8.
// Ghi lại phần dư.
// Lặp lại cho đến khi kết quả của phép chia là 0.
// Số bát phân sẽ là các phần dư viết ngược từ dưới lên.
// Ví dụ: Chuyển đổi số thập phân 111 sang bát phân

// Sao chép mã
// 111 ÷ 8 = 13 dư 7
// 13 ÷ 8 = 1 dư 5
// 1 ÷ 8 = 0 dư 1
// Như vậy, số 111 (decimal) = 157 (octal).

// ---------------------------------------------------------------------------------------------------------

// (8, 16) // bát phân (Octal) sang thập lục phân (Hexadecimal)

// Cách chuyển:

// Chuyển từ bát phân (Octal) sang nhị phân (Binary):
// Mỗi chữ số bát phân chuyển thành 3 chữ số nhị phân.

// Chuyển từ nhị phân (Binary) sang thập lục phân (Hexadecimal):
// Nhóm các chữ số nhị phân thành các nhóm 4 từ phải sang trái. Nếu nhóm cuối cùng không đủ 4 chữ số, thêm các số 0 vào phía trước cho đủ.
// Chuyển đổi mỗi nhóm thành một chữ số thập lục phân.

// Bảng chuyển đổi bát phân sang nhị phân:
// 0 (octal) = 000 (binary)
// 1 (octal) = 001 (binary)
// 2 (octal) = 010 (binary)
// 3 (octal) = 011 (binary)
// 4 (octal) = 100 (binary)
// 5 (octal) = 101 (binary)
// 6 (octal) = 110 (binary)
// 7 (octal) = 111 (binary)

// Bảng chuyển đổi nhị phân sang thập lục phân:
// 0000 (binary) = 0 (hex)
// 0001 (binary) = 1 (hex)
// 0010 (binary) = 2 (hex)
// 0011 (binary) = 3 (hex)
// 0100 (binary) = 4 (hex)
// 0101 (binary) = 5 (hex)
// 0110 (binary) = 6 (hex)
// 0111 (binary) = 7 (hex)
// 1000 (binary) = 8 (hex)
// 1001 (binary) = 9 (hex)
// 1010 (binary) = A (hex)
// 1011 (binary) = B (hex)
// 1100 (binary) = C (hex)
// 1101 (binary) = D (hex)
// 1110 (binary) = E (hex)
// 1111 (binary) = F (hex)

// Ví dụ: Chuyển đổi số bát phân 345 sang thập lục phân

// Chuyển từ bát phân sang nhị phân:
// 3 (octal) = 011 (binary)
// 4 (octal) = 100 (binary)
// 5 (octal) = 101 (binary)
// Kết quả: 345 (octal) = 011100101 (binary)

// Nhóm các chữ số nhị phân thành các nhóm 4 từ phải sang trái:
// 0111 0010 0101

// Chuyển đổi mỗi nhóm thành một chữ số thập lục phân sử dụng bảng trên:
// 0111 (binary) = 7 (hex)
// 0010 (binary) = 2 (hex)
// 0101 (binary) = 5 (hex)

// Kết quả: Số 345 (octal) = 725 (hex)

// ---------------------------------------------------------------------------------------------------------

// (10, 16) // thập phân (Decimal) sang thập lục phân (Hexadecimal)

// Cách chuyển:

// Chia số thập phân cho 16.
// Ghi lại phần dư.
// Lặp lại cho đến khi kết quả của phép chia là 0.
// Số thập lục phân sẽ là các phần dư viết ngược từ dưới lên.

// Ví dụ: Chuyển đổi số thập phân 255 sang thập lục phân:
// 255 ÷ 16 = 15 dư 15 (F)
// 15 ÷ 16 = 0 dư 15 (F)
// Như vậy, số 255 (decimal) = FF (hex).

// ---------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------

// Các cặp hoán vị chuyển đổi giữa các hệ số
// (8, 2)
// (10, 2)
// (16, 2)
// (10, 8)
// (16, 8)
// (16, 10)
// Như vậy, có tổng cộng 6 cặp chuyển đổi giữa các hệ số 8, 10, 16 và 2.

// ---------------------------------------------------------------------------------------------------------

// (8, 2) // bát phân (Octal) sang nhị phân (Binary)

// Cách chuyển:

// Chuyển từng chữ số bát phân thành 3 chữ số nhị phân.

// Bảng chuyển đổi bát phân sang nhị phân:
// 0 (octal) = 000 (binary)
// 1 (octal) = 001 (binary)
// 2 (octal) = 010 (binary)
// 3 (octal) = 011 (binary)
// 4 (octal) = 100 (binary)
// 5 (octal) = 101 (binary)
// 6 (octal) = 110 (binary)
// 7 (octal) = 111 (binary)

// Ví dụ: Chuyển đổi số bát phân 157 sang nhị phân:
// 1 (octal) = 001 (binary)
// 5 (octal) = 101 (binary)
// 7 (octal) = 111 (binary)
// Kết quả: 157 (octal) = 001101111 (binary)

// ---------------------------------------------------------------------------------------------------------

// (10, 2) // thập phân (Decimal) sang nhị phân (Binary)

// Cách chuyển:

// Chia số thập phân cho 2.
// Ghi lại phần dư.
// Lặp lại cho đến khi kết quả của phép chia là 0.
// Số nhị phân sẽ là các phần dư viết ngược từ dưới lên.

// Ví dụ: Chuyển đổi số thập phân 45 sang nhị phân:
// 45 ÷ 2 = 22 dư 1
// 22 ÷ 2 = 11 dư 0
// 11 ÷ 2 = 5 dư 1
// 5 ÷ 2 = 2 dư 1
// 2 ÷ 2 = 1 dư 0
// 1 ÷ 2 = 0 dư 1
// Kết quả: 45 (decimal) = 101101 (binary)

// ---------------------------------------------------------------------------------------------------------

// (16, 2) // thập lục phân (Hexadecimal) sang nhị phân (Binary)

// Cách chuyển:

// Chuyển từng chữ số thập lục phân thành 4 chữ số nhị phân.

// Bảng chuyển đổi thập lục phân sang nhị phân:
// 0 (hex) = 0000 (binary)
// 1 (hex) = 0001 (binary)
// 2 (hex) = 0010 (binary)
// 3 (hex) = 0011 (binary)
// 4 (hex) = 0100 (binary)
// 5 (hex) = 0101 (binary)
// 6 (hex) = 0110 (binary)
// 7 (hex) = 0111 (binary)
// 8 (hex) = 1000 (binary)
// 9 (hex) = 1001 (binary)
// A (hex) = 1010 (binary)
// B (hex) = 1011 (binary)
// C (hex) = 1100 (binary)
// D (hex) = 1101 (binary)
// E (hex) = 1110 (binary)
// F (hex) = 1111 (binary)

// Ví dụ: Chuyển đổi số thập lục phân 6B sang nhị phân:
// 6 (hex) = 0110 (binary)
// B (hex) = 1011 (binary)
// Kết quả: 6B (hex) = 01101011 (binary)

// ---------------------------------------------------------------------------------------------------------

// (10, 8) // thập phân (Decimal) sang bát phân (Octal)

// Cách chuyển:

// Chia số thập phân cho 8.
// Ghi lại phần dư.
// Lặp lại cho đến khi kết quả của phép chia là 0.
// Số bát phân sẽ là các phần dư viết ngược từ dưới lên.

// Ví dụ: Chuyển đổi số thập phân 111 sang bát phân:
// 111 ÷ 8 = 13 dư 7
// 13 ÷ 8 = 1 dư 5
// 1 ÷ 8 = 0 dư 1
// Kết quả: 111 (decimal) = 157 (octal)

// ---------------------------------------------------------------------------------------------------------

// (16, 8) // thập lục phân (Hexadecimal) sang bát phân (Octal)

// Cách chuyển:

// Chuyển từ thập lục phân (Hexadecimal) sang nhị phân (Binary):
// Mỗi chữ số thập lục phân chuyển thành 4 chữ số nhị phân.

// Chuyển từ nhị phân (Binary) sang bát phân (Octal):
// Nhóm các chữ số nhị phân thành các nhóm 3 từ phải sang trái. Nếu nhóm cuối cùng không đủ 3 chữ số, thêm các số 0 vào phía trước cho đủ.
// Chuyển đổi mỗi nhóm thành một chữ số bát phân.

// Bảng chuyển đổi thập lục phân sang nhị phân:
// 0 (hex) = 0000 (binary)
// 1 (hex) = 0001 (binary)
// 2 (hex) = 0010 (binary)
// 3 (hex) = 0011 (binary)
// 4 (hex) = 0100 (binary)
// 5 (hex) = 0101 (binary)
// 6 (hex) = 0110 (binary)
// 7 (hex) = 0111 (binary)
// 8 (hex) = 1000 (binary)
// 9 (hex) = 1001 (binary)
// A (hex) = 1010 (binary)
// B (hex) = 1011 (binary)
// C (hex) = 1100 (binary)
// D (hex) = 1101 (binary)
// E (hex) = 1110 (binary)
// F (hex) = 1111 (binary)

// Bảng chuyển đổi nhị phân (3 bit) sang bát phân:
// 000 (binary) = 0 (octal)
// 001 (binary) = 1 (octal)
// 010 (binary) = 2 (octal)
// 011 (binary) = 3 (octal)
// 100 (binary) = 4 (octal)
// 101 (binary) = 5 (octal)
// 110 (binary) = 6 (octal)
// 111 (binary) = 7 (octal)

// Ví dụ: Chuyển đổi số thập lục phân 3F7A sang bát phân:

// Chuyển từ thập lục phân sang nhị phân:
// 3 (hex) = 0011 (binary)
// F (hex) = 1111 (binary)
// 7 (hex) = 0111 (binary)
// A (hex) = 1010 (binary)
// Kết quả: 3F7A (hex) = 0011 1111 0111 1010 (binary)

// Nhóm các chữ số nhị phân thành các nhóm 3 từ phải sang trái:
// 001 111 101 111 011 110 10 (thêm số 0 vào phía trước nhóm 10 cho đủ nhóm 3: 010)
// 001 111 101 111 011 110 010

// Chuyển đổi mỗi nhóm thành một chữ số bát phân:
// 001 (binary) = 1 (octal)
// 111 (binary) = 7 (octal)
// 101 (binary) = 5 (octal)
// 111 (binary) = 7 (octal)
// 011 (binary) = 3 (octal)
// 110 (binary) = 6 (octal)
// 010 (binary) = 2 (octal)

// Kết quả: 3F7A (hex) = 1757362 (octal)

// ---------------------------------------------------------------------------------------------------------

// (16, 10) // thập lục phân (Hexadecimal) sang thập phân (Decimal)

// Cách chuyển:

// Nhân mỗi chữ số thập lục phân với 16 mũ vị trí của nó (bắt đầu từ 0).
// Cộng tất cả các kết quả lại.

// Ví dụ: Chuyển đổi số thập lục phân 2F7A sang thập phân:
// 2 * 16^3 + F * 16^2 + 7 * 16^1 + A * 16^0
// = 2 * 4096 + 15 * 256 + 7 * 16 + 10
// = 8192 + 3840 + 112 + 10
// = 13154
// Như vậy, số 2F7A (hex) = 13154 (decimal).

// ---------------------------------------------------------------------------------------------------------
