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
 	
    for (int i=0; i<size-1;i++){
		for(int j=i+1; j<=size;j++){
			if(arr[i]>arr[j]){
				int temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	 
	for(int i = 0; i < size;i++){
		printf("%d ", arr[i]);	
	}
	return 0; 
}
