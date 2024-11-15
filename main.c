#include <stdio.h>

int main(void) {
    int a = 1;
    // break, continue
    while (1) {
        if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0) {
            printf("%d", a); // 105
            break; // thoát cặp ngoặc nhọn
        }
        a++;
    }

//   switch case break;
}


//BT3: int a, b;
//printf("nhap 2 so a b:");
//scanf("%d %d", &a, &b);
// vong lap vo han!
// input: a = 1 , b = 50
// 1-> 50
//    while (a <= b) {
//        if (a % 3 == 0 && a % 5 == 0) {
//            printf("%d ", a);
//        }
//        a++;
//    }

//BT4: int a;
////    printf("nhap so a");
////    scanf("%d", &a);
////    int sum = 0;
//////    bai tinh tong:
////// sum = 0 là store để các biến cộng dồn lại với nhau: sum+=...
////// bài tính tích:
////// multiply = 1 la 1 store để các so nhan voi nhau: multiply*=...
////
////// B1: 8243 % 10 = 3 -> sum += 8243% 10 (3)
////// B2: 8243 / 10 = 824
////
////// B1: 824 % 10 = 4 -> -> sum += 824% 10 (3 + 4)
////// B2: 824 / 10 = 82
////
////// Bq: 82 % 10 = 2 >> sum += 82%10 (3+4+2)
////    // B2: 82/10 = 8
////
////    //B1: 8%10 = 8 >> sum += 8%10 (3+4+2+8)
////    //b2: 8/10 = 0
////
////    // b1: 0 % 0 = 0
////    // b2: 0 / 0 = 0
//////......
////
////// a = 5;
////// Tang bien a len 2 đơn vị: a+=2
////// a = 7
////// a = 8234 -> a = 823
////// a/=10;
////    while (a > 0) {
////        // scope:
////        int b = a % 10;
////        sum += b;
////        a /= 10;
////        printf("%d", b);
////        //     sum+= ...;
////        //    ste
////    }
////
////    printf("%d", sum);
////    printf("%d", b);

// BT5: //    int choice;
////
////    do {
////        printf("\nnhap lua chon:\n1. Check if a number is even or odd\n2. Check if a number is prime.\n3. Check if a number is divisible by 3\n4. Exit ");
////        scanf("%d", &choice);
////        switch (choice) {
////            case 1: {
////                printf("nhap so");
////                int a;
////                scanf("%d", &a);
////
////                if (a % 2 == 0) printf("even");
////                else printf("odd");
////                break;
////            }
////            case 2: {
////                int b;
////                // 13 co phai nguyen to hay khong
////                // trong khoang tu 2 - > 12 so 13 khong chia het cho so na khác nưa
////                printf("nhap so");
////                scanf("%d", &b);
////                bool isCheck = true;
////                // isCheck la 1 bien boolean check true / false
////                // in trong vonfg lap for se bi in ra rat nhieu lan?
////                for (int i = 2; i < b; i++) {
////                    if (b % i == 0) isCheck = false;
////                }
////                if (isCheck == true) printf("so nguyen to");
////                else printf("khong phai so nguyen to");
////                break;
////            }
////            case 3: {
////                int c;
////                printf("nhap so");
////                scanf("%d", &c);
////                if (c % 3 == 0) printf("chia het cho 3");
////
////                break;
////            }
////            case 4: {
////                printf("4. Exit");
////                break;
////            }
////            default: {
////                printf("invalid");
////                break;
////            }
////        }
////    } while (choice != 4);
//
//
//
//    // do while : validate, menu chuc nang (5,6%)
//    // while: khong biet truoc so lan lặp (2,3%)
//    // for: trường hợp còn lại (90%)

// BT7: //    int choice;
//////    1. Calculate the perimeter and area of a rectangle.
//////    2. Calculate the perimeter and area of a triangle.
//////    3. Calculate the perimeter and area of a circle.
//////    4. Exit.
////    do {
////        printf("1. Calculate the perimeter and area of a rectangle.\n2. Calculate the perimeter and area of a triangle.\n3. Calculate the perimeter and area of a circle.\n4. Exit.");
////        scanf("%d", &choice);
////        switch (choice) {
////            case 1: {
////                int a, b, pr;
////                printf("nhap chieu dai va chieu rong");
////                scanf("%d %d", &a, &b);
////                pr = (a + b) * 2;
////                printf("chu vi = %d", pr);
////                break;
////            }
////            case 2: {
////                int c, d, e, pt;
////                printf("nhap 3 canh tam giam");
////                scanf("%d %d %d", &c, &d, &e);
////                pt = c + d + e;
////                printf("chu vi = %d", pt);
////                break;
////            }
////            case 3: {
////                int r; // 2 3  4  5 6
////                // int long: 28282828282828828282828282
////                double pc; // 2.33 2.56 2.78
////                const double pi = 3.14;
////                printf("nhap radius");
////                scanf("%d", &r);
////                pc = r * pi * 2;
////
////                printf("chu vi = %.2lf", pc);
////                break;
////            }
////            case 4: {
////                printf("Exit");
////                break;
////            }
////            default:
////                printf("Mời bạn nhâp lại!!!!");
////                break;
////        }
////    } while (choice != 4);

// int a;
//    printf("nhap a");
//    scanf("%d", &a); // a = 12
//    int count = 0;
//    // sum , multiply, count
//    // count ++;
//    for (int i = a; i > 0; i--) {
//        if (a % i == 0) {
//            count++;
//        }
//    }
//    printf("%d", count);

// Bài 8: int a, b;
//    int mul = 1;
//    printf("nhap a b");
//    scanf("%d %d", &a, &b);
//    // 2^0 = 1
//    for (int i = 0; i <= b; i++) {
//        mul *= a;
//    }
//    printf("%d", mul);
//    return 0;