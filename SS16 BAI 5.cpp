#include <stdio.h>

// Ham de cap nhat phan tu trong mang
void updateArray(int *arr, int size, int newValue, int position) {
    // Kiem tra vi tri cap nhat co hop le khong
    if (position >= 0 && position < size) {
        // Cap nhat gia tri moi cho phan tu tai vi tri
        arr[position] = newValue;
    } else {
        // Bao loi neu vi tri khong hop le
        printf("Vi tri cap nhat khong hop le.\n");
    }
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 3, 4, 5};

    // Tinh kich thuoc cua mang
    int size = sizeof(arr) / sizeof(arr[0]);

    // In mang truoc khi cap nhat
    printf("Mang truoc khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Goi ham updateArray de cap nhat phan tu trong mang
    updateArray(arr, size, 10, 2); // Cap nhat phan tu tai vi tri 2 voi gia tri moi la 10

    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

