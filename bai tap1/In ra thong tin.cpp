#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n < 1");
    } else if (n < 3) {
        printf("linh");
    } else if (n < 6) {
        printf("giang");
    }

    return 0;
}

