#include <stdio.h>

// Ham de doi gia tri cua hai bien su dung con tro
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;   
	// Khai bao bien x va gan gia tri 5
    int y = 10; 
	// Khai bao bien y va gan gia tri 10

    printf("Truoc khi doi:\n");
    printf("x = %d, y = %d\n", x, y);

    // Goi ham swap de doi gia tri cua x va y
    swap(&x, &y);

    printf("Sau khi doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

