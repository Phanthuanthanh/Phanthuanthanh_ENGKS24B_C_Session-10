#include<stdio.h>
int main() {

	int arr[] = {100, 70, 80, 40, 60, 50, 10, 30, 90, 20};

	for(int i = 0; i < 10; i++){
		printf("%d ",arr[i]); 
	} 
	
	printf("\n"); 
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10 - i - 1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			} 
		} 
	} 
	
	printf("---> ");
	for(int i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
