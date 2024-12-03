#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n], positions[n]; 

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[found] = i; 
            found++;
        }
    }

    if (found > 0) {
        printf("Phan tu %d xuat hien %d lan tai cac vi tri: ", x, found);
        for (i = 0; i < found; i++) {
            printf("%d ", positions[i]);
        }
        printf("(chi so bat dau tu 0).\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

