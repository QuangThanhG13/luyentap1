#include <stdio.h>

int main() {
    float a, b;
    printf("Nhap vao a: ");
    scanf("%f", &a);
    printf("Nhap vao b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem.\n");
        else
            printf("Phuong trinh vo nghiem.\n");
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }

    return 0;
}

