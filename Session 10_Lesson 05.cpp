#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; 
        } else if (arr[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int n, i, x, result;

    printf("Nhap so phan tu cua mang (mang da sap xep tang dan): ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang (theo thu tu tang dan):\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    result = binarySearch(arr, n, x);

    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d (chi so bat dau tu 0).\n", x, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

