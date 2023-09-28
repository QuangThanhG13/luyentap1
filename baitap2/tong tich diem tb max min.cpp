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
    int size = sizeof(arr) / sizeof(arr[0]);//nó có 5 phan tu, moi phan tu chia làm 4 byte (gia su int là 4 byte trên he thong ),
                                         	// sizeof(arr) se là 5 * 4 = 20 byte và sizeof(arr[0]) se là 4 byte. Do dó, sizeof(arr) / sizeof(arr[0]) se là 20/4 = 5,

    calculateArrayProperties(arr, size);

    return 0;
}

