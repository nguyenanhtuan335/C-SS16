#include <stdio.h>

int main() {
    int x = 10;    
	 // Khai báo bien x và gán giá tro 10 cho nó
    int *ptr = &x; 
	 // Khai báo con tro ptr tro den bien x

    // Cách 1: In truc tiep giá tri và dia cho cua bien x
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);

    // Cách 2: In giá tri và dia chi cua bien x thông qua con tro ptr
    printf("Gia tri cua x qua con tro: %d\n", *ptr);
    printf("Dia chi cua x qua con tro: %p\n", (void*)ptr);

    return 0;
}

