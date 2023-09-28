#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Sau khi hoan vi, so thu nhat: %d, so thu hai: %d", a, b);
    return 0;
}

