#include <stdio.h>

#include <stdio.h>
// /Users/mac0s/Documents/LearnCWithHung
// /Users/mac0s/Documents/LearnCWithHung/B1/B1.c
//int main (int argc, char * argv []){
//    FILE* fp;
//    char ch;
//
//    if(argc != 2) printf ("an argumenent is missing");
//    else {
//        if ((fp = fopen (argv [1], "r"))= NULL){
//            printf ("error open thr file\n");
//            exit (1);
//        }
//        do {
//            ch = fgetc (fp);
//            if (ch != EOF) putchar (ch);
//        }
//        while (ch != EOF);
//        fclose(fp);
//    }
//}

int main(void) {
    int arr[5];
    int a;
    for (int i = 0; i < 5; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    printf("nhap a: ");
    scanf("%d", &a);
    int c, d;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == a) {
                c = arr[i];
                d = arr[j];
            }
        }
    }
    printf("2 so %d %d", c, d);
    return 0;
}

// Input:
// Output:




// Nhũng bài toán lieên quan vị trí khởi tạo biến pos = -1
// vòng lặp for luôn có cú pháp for i
// Input dùng 1 vòng for để nhập,Xử lý logic, in phải dùng 1 vòng for khác
//    sum = 0 (store cộng dồn) -> sum += ...
//    count = 0 (Store đếm) -> count++
//    multiply = 1 ->   sum *= ...
// khi muốn in 1 lần thì in ngoài vòng for/while
