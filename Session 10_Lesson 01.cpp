#include<stdio.h>
int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int num, found = 0; 

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMoi ban nhap vao phan tu bat ky: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            printf("Phan tu %d ton tai trong mang o vi tri: %d\n", num, i);
            found = 1; 
            break; 
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", num);
    }

    return 0;
}

