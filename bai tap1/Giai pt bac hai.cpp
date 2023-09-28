#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhap vao a: ");
    scanf("%f", &a);
    printf("Nhap vao b: ");
    scanf("%f", &b);
    printf("Nhap vao c: ");
    scanf("%f", &c);

    float delta = b * b - 4 * a * c;
    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x = %.2f\n", x);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}

