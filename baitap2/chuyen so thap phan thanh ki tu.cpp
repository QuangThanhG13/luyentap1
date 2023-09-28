#include <stdio.h>
#include <stdlib.h>

int main() {
    double number; // Khai báo bien
    char strNumber[20]; // Khai báo mot mang 

    printf("Nhap so thap phan: ");
    scanf("%lf", &number);

    // Su dung sprintf de chuyen doi so than chuoi 
    sprintf(strNumber, "%.2lf", number);

    printf("So thap phan sau khi chuyen doi : %s\n", strNumber);

    return 0;
}

