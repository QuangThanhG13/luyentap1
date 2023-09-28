#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong S(%d) = %d", n, sum);
    return 0;
}

