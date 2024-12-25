#include <stdio.h>


int main(void) {

    float a, b;
    float *pa = &a;
    float *pb = &b;
    scanf("%f %f", pa, pb);

    printf("value of a & b = %f %f", a, b);
    printf("value of pa & pb = %f %f", *pa, *pb);

    // Thay đổi giá trị của a, b:

    *pa += 2;
    *pb -= 1;
    printf("after changed %f %f", *pa, *pb);

//    float temp;
//    temp = *pa; // dereference
//    *pa = *pb;
//    *pb = temp;
//    printf("after swap %f %f", *pa, *pb);


    return 0;
}


