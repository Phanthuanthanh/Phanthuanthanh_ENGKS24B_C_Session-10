#include <stdio.h>

int main() {
    int n, m;

    printf("Moi ban nhap so dong n: ");
    scanf("%d", &n);
    printf("Moi ban nhap so cot m: ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Moi ban nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang ban dau:\n"); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int x = 0; x < n - i - 1; x++) {
                if (arr[x][j] > arr[x + 1][j]) {
                    int temp = arr[x][j];
                    arr[x][j] = arr[x + 1][j];
                    arr[x + 1][j] = temp;
                }
            }
        }
    }

    printf("\nMang sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

