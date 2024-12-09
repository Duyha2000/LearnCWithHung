#include <stdio.h>

int numbers() {
    int n = 1;
    while (n > 0) {
        if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0) {
            return n;
        }
        n++;
    }
}

// Viết 1 function in ra số đầu tiên chia hết cho 3,5,7 số dương

int function2(void) {
    printf("%d", numbers());
    return 0;
}