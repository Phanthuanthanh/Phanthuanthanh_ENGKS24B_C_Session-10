#include <stdio.h>

int main() {
    int n;

    printf("Moi ban nhap so dong va so cot: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Moi ban nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang ban dau:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int diagonal[n];
    for (int i = 0; i < n; i++) {
        diagonal[i] = arr[i][n - i - 1]; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (diagonal[j] > diagonal[j + 1]) {
                int temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i][n - i - 1] = diagonal[i];
    }

    printf("\nMang sau khi sap xep duong cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

