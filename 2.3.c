int main() {
    int a, b, c, tong;
    
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    
    tong = a + b + c;
    printf("Tong: %d\n", tong);
    
    // Calculate average as a floating-point number
    double avg = (double)tong / 3.0;
    printf("Trung binh: %.2f\n", avg); // Print average with 2 decimal places
    
    getchar(); // Wait for a key press to exit
    
    return 0;
}
