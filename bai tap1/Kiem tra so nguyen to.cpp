#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    printf("Nhap so nguyen N: ");
    scanf("%d", &N);

    if (is_prime(N))
        printf("%d la so nguyen to.\n", N);
    else
        printf("%d khong la so nguyen to.\n", N);

    return 0;
}

