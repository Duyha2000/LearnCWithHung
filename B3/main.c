#include <stdio.h>

int main(void) {
    /*
     BlueMont hotel have 4 different types of room:
     nhap location
     nhap so tang 1 <= tầng<=5 (sai bắt nhập lại)
     nhap so phong cua moi tang <=30
     nhap so phong dc dat cua moi hang phong cua tang minh da nhap

     output:
     thu nhap (hang phong * gia phong * so luong
     phong dc dat
     phong trong
     ty le phong dat/tong phong
     tang co so luong phong it nhat
     tin

     B0: Nhập location
     B1: Nhập so tang (3)

     T1: - - - - -  (nhập số phòng)
     T2: - - - - - - - - (nhập số phòng)
     T3: - - - (nhập số phòng)
     */

    return 0;
}
/*Bài 1:
int N;
int sum = 0;
printf("nhap N: ");
scanf("%d", &N);

for ( int i = 1; i <= N; i++) sum += i;
printf("%d", sum);

 Bài 2: int a, b, x;
    int count = 0;
    printf("nhap a b: ");
    scanf("%d %d", &a, &b);
    printf("nhap x");
    scanf("%d", &x);

    for (int i = a; i <= b; i++) {
        if (i % x == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount = %d", count);
    Bài tập 3:   int pr = 1;
    int N;
    printf("nhap N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        pr *= i;
    }
    printf("%d", pr);

 Bài 5:    int n;
    scanf("%d", &n);
    int sum = 0;
//    continue: bỏ qua
// in ra: 1 2 -  3 5 6 7 8 9
//    for (int i = 1; i <= 9; i++) {
////        if (i == 3) continue;
////        printf("%d", i); // 1 2 4 5 6 7
//        if (i != 3) printf("%d", i);
//    }

    for (int i = 1; i <= n; i++) {
//        if (i % 2 != 0) continue;
//        sum += i;
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);

    Bài 6:  int a, b, x;
    int count = 0;
    printf("nhap a b: ");
    scanf("%d %d", &a, &b);
    printf("nhap x");
    scanf("%d", &x);

    while (a <= b) {
        if (a % x == 0) {
            printf("%d", a);
            count++;
        }
        a++;

    }
    printf("\n");
    printf("%d", count);

    Bai 7: //    int n;
//    printf("nhap so:");
//    scanf("%d", &n);
//    // tạo biến count để đếm
//    int count = 0;
//    while (1) {
//        int a;
//        printf("nhap so doan");
//        scanf("%d", &a);
//
//        if (a < n) {
//            printf(" too low");
//            count++;
//        }
//        if (a > n) {
//            printf("too high");
//            count++;
//        }
//
//        if (n == a || count >= 5) {
//            printf("game over");
//            break;
//        }
//    }
// Number=  70 : too high, Number = 40: too low
// đoán sai 5 lần ghi game over

   int n;

    do {
        printf("show menu:");
        printf("\n1. coke 1$");
        printf("\n2. pépsi 2$");
        printf("\n3. water 3$");
        printf("\n4. coffee 4$");
        printf("\n5. Exit");
        printf("\nnhap lua chon 1 - 5:");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("you select coke 1$");
                break;
            case 2:
                printf("you select pepsi 2$");
                break;
            case 3:
                printf("you select coca 3$");
                break;
            case 4:
                printf("you select water 4$");
                break;
            case 5:
                printf("Exit");
                break;
            default:
                printf("invalid");
                break;
        }

    } while (n != 5);

    Bài 9: int n, a, b;
    do {
        printf("show menu:");
        printf("\n1. add");
        printf("\n2. subtract");
        printf("\n3. mutiple");
        printf("\n4. division");
        printf("\n5. Exit");
        printf("\nnhap lua chon 1 - 5:");
        scanf("%d", &n); // n = 5
        // Mình sẽ cho nó nhập khi nào? khi n >= 1 và n <=4
        if (n >= 1 && n <= 4) {
            printf("\nnhap a b: ");
            scanf("%d %d", &a, &b);
        }
        switch (n) {
            case 1:
                printf("%d + %d = %d", a, b, a + b);
                break;
            case 2:
                printf("%d - %d = %d", a, b, a - b);
                break;
            case 3:
                printf("%d * %d = %d", a, b, a * b);
                break;
            case 4:
                if (b == 0) printf("invalid");
                printf("%d / %d = %d", a, b, a / b);
                break;
            case 5:
                printf("exit");
                break;
            default:
                printf("invalid");
                break;
        }
    } while (n != 5);

    Bài 10:  int n;
    do {
        printf("nhap tuoi: ");
        scanf("%d", &n);
        if (n < 0 || n > 120) printf("invalid");
        else printf("tuoi cua ban la: %d", n);

    } while (n < 0 || n > 120);

 */