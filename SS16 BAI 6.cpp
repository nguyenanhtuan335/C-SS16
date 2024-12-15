#include <stdio.h>

// Ham tim vi tri cua phan tu trong mang
int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // Tra ve vi tri neu tim thay
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 4, 5, 6, 7};
    
    // Tinh kich thuoc cua mang
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Gia tri can tim kiem
    int value = 7;
    
    // Goi ham findElement de tim vi tri cua phan tu
    int position = findElement(arr, size, value);
    
    // In ket qua tra ve cua ham ra man hinh
    if (position != -1) {
        printf("Vi tri cua phan tu %d trong mang la: %d\n", value, position);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", value);
    }
    
    return 0;
}

