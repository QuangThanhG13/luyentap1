#include <stdio.h>

int main() {
    int matran1[3][3] = {{10, 5, 3}, {7, 5, 6}, {8, 5, 9}};
    int matran2[3][3] = {{5, 6, 7}, {4, 5, 46}, {3, 2, 10}};
	int ketqua[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int i, j, k;

    // thuc hien nhan
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                ketqua[i][j] += matran1[i][k] * matran2[k][j];
            }
        }
    }

    // In ra ma tran
    printf("Ma tran ket qua:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", ketqua[i][j]);
        }
        printf("\n");
    }

    return 0;
}

