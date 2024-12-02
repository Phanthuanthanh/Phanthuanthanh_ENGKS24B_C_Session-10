#include <stdio.h>

int main() {
    int arr[] = {100, 70, 80, 40, 60, 50, 10, 30, 90, 20};

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
	printf("\n");

  
    for (int i = 1; i < 10; i++) {
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }

	printf("---> ");
	for(int i = 0; i < 10; i++){
		printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

