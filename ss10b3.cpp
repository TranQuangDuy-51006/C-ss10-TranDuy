#include<stdio.h>

int main(){
	int arr[100];
	int size;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d", &size);
	for(int i = 0; i < size;i++){
		printf("nhap vao phan tu thu %d cua mang: ", i+1);
		scanf("%d", &arr[i]); 
	}
 	
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    } 
	 
	for(int i = 0; i < size;i++){
		printf("%d ", arr[i]);	
	}
	return 0; 
}
