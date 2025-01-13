#include <stdio.h>


// pass by value: swap a - b
void swapV(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    // a = 4 b = 3
    // In function:
    printf("%p \t%p\n", &a, &b);
    // xóa 2 địa chỉ copy đi
}

// pass by reference: swap a - b (Derereference )
void swapR(int *a, int *b) {
    // printf("%p \t%p", &a, &b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // *size += 1
}

int main(void) {
    // https://duytran0209.notion.site/Con-tr-15840466d12b803384bcd71f56057f41?pvs=4
//    int x = 3; // - - - - [0x16b49b728 0x16b49b729 0x16b49b730 0x16b49b731]
    //printf("%p \n", &x); // &x
    // Pointer:
//

    // printf("%p", p);

    // int: 4 byte - char: 1 byte - double: 8 byte - float: 4 byte
    int a = 3; // 0x16f3e771c ->                                    ----x16f3e76ec
    int b = 4;
    // Before:
    // printf("%p \t%p\n", &a, &b);
    // swapV(a, b);
    //  swapR(&a, &b);
    // printf("\n%d \t%d", a, b);
    // swap 2 numbers

    // int x = 10 -> tăng x lên 2 đơn vị:
    int x = 10;
    int *p = &x;
    *p += 2;
    // printf("%d", x);

    /*
     Exercise 2
Write a program that asks the user (via terminal):
 One character ch variable
 Two integer numbers variables a, b
 Creates 3 pointers - pch, pa, pb - to the read variables
Shows the following information:
 The memory address of the ch variable
 The memory address of the pch variable
 The content of the pch variable
 The value pointed (referenced) by the pch variable
 The memory address of a and b variables
 Os memory addresses of pa and pb variables
 The content of pa and pb variables
 The values pointed by pa and pb variables
Expected result (values may vary):
Type a character : a
Type two integer numbers : 12 34
- ch address = 0 x7ffee6f5d7ef
- pch address = 0 x7ffee6f5d7e0
- pch content = 0 x7ffee6f5d7ef
- Value pointed by pch = a
- Addresses of a and b = 0 x7ffee6f5d7dc and 0 x7ffee6f5d7d8
- Addresses of pa and pb = 0 x7ffee6f5d7d0 and 0 x7ffee6f5d7c8
- Contents of pa and pb = 0 x7ffee6f5d7dc and 0 x7ffee6f5d7d8
- Values pointed by pa and pb = 12 and 34
     */
    int a, b;
    char c;
    scanf("%d %d", &a, &b);
    scanf("%c", &c);
    int *pa = &a;
    int *pb = &b;
    char *pch = &c;

    printf("%p", &c);
    printf("%p", &pch);
    printf("%c", *pch);


    return 0;
}


