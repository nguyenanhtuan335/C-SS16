#include <stdio.h>

// Ham de tinh tong hai so nguyen su dung con tro
void calculateSum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 5;    
	// Khai bao bien x va gan gia tri 5
    int y = 10;   
	// Khai bao bien y va gan gia tri 10
    int sum;      
	// Khai bao bien ket qua sum

    // Goi ham calculateSum de tinh tong va luu vao bien sum
    calculateSum(&x, &y, &sum);

    // In ra gia tri cua bien sum de kiem tra
    printf("Tong cua %d va %d la: %d\n", x, y, sum);

    return 0;
}

