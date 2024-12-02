#include<stdio.h>
int main() {

	int arr[] = {100, 70, 80, 40, 60, 50, 10, 30, 90, 20};

	for(int i = 0; i < 10; i++){
		printf("%d ",arr[i]); 
	} 
	
	printf("\n");
	
    for (int i = 0; i < 10 - 1; i++) {
        int minIndex = i; 

        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("--->");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

