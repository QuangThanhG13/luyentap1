#include <stdio.h>

void calculateArrayProperties(int arr[], int size) {
    int sum = 0;
    int product = 1;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    double average = (double)sum / size;

    printf("Tong cua mang: %d\n", sum);
    printf("Tich cua mang: %d\n", product);
    printf("Gia tri trung binh: %.2lf\n", average);
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);//n� c� 5 phan tu, moi phan tu chia l�m 4 byte (gia su int l� 4 byte tr�n he thong ),
                                         	// sizeof(arr) se l� 5 * 4 = 20 byte v� sizeof(arr[0]) se l� 4 byte. Do d�, sizeof(arr) / sizeof(arr[0]) se l� 20/4 = 5,

    calculateArrayProperties(arr, size);

    return 0;
}

