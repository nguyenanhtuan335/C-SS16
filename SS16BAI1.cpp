#include <stdio.h>

int main() {
    int x = 10;    
	 // Khai b�o bien x v� g�n gi� tro 10 cho n�
    int *ptr = &x; 
	 // Khai b�o con tro ptr tro den bien x

    // C�ch 1: In truc tiep gi� tri v� dia cho cua bien x
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);

    // C�ch 2: In gi� tri v� dia chi cua bien x th�ng qua con tro ptr
    printf("Gia tri cua x qua con tro: %d\n", *ptr);
    printf("Dia chi cua x qua con tro: %p\n", (void*)ptr);

    return 0;
}

