#include <stdio.h>

// Ham de in tat ca phan tu trong mang su dung con tro
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
	 // Khai bao va gan gia tri cho mang
    int size = sizeof(arr) / sizeof(arr[0]);  
	// Tinh kich thuoc cua mang

    // Goi ham printArray de in tat ca cac phan tu trong mang
    printArray(arr, size);

    return 0;
}

