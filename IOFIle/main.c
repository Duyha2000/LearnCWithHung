#include <stdio.h>

int main() {


    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int check = 1; // 0 : false - 1 true
    // -> 1 2 3 4 [5] 3

    // ( 5 - 3 ) * ( 3 - 1) > 0

    // ( 3 - 5 ) * ( 5 - 3 ) < 0

    // [1 9]
    // [9 1]
    // size: > 2 -> 3 5 9 -> ( 9 - 5 ) * ( 5 - 3 )
    // size: 4 -> 3 5 8 9 ->
    for (int i = 2; i < n; i++) {
        if ((arr[i] - arr[i - 1]) * (arr[i] - arr[i + 1]) < 0) {
            check = 0;
        }

    }
    if (check == 0) printf("no");
    else printf("yes");

    return 0;
}



//  1 [3] 5 [8] 9 -> tăng dần

//  (3 - 1 ) * ( 3 - 5) < 0
//  ( 8 - 5 ) * ) * ( 8 - 9) < 0

// 9 [7] 5 2 1
//  ( 7 - 9) * (7 - 5) < 0

// 1 3 2 4 9
//  (3 - 1 ) * ( 3 - 2) > 0
//    FILE *f1, *f2;
//    f1 = fopen("/Users/mac0s/Documents/LearnCWithHung/IOFIle/input.txt", "r");
//    f2 = fopen("/Users/mac0s/Documents/LearnCWithHung/IOFIle/output.txt", "w");
//    int n; // khởi tạo giá trị trong vùng nhớ
//    // - - - - (n) - - - - -
//    fscanf(f1, "%d", &n);
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        fscanf(f1, "%d", &arr[i]);
//    }
//
//    int tar;
//
//    fscanf(f1, "%d", &tar);
//    // '3' 5 2 9
//    // target 7
//
//    // 2 vong for long nhau
//    // 5 2
//    int a, b;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] + arr[j] == tar) {
//                a = arr[i];
//                b = arr[j];
//                break;
//            }
//        }
//    }
//    fprintf(f2, "%d %d", a, b);
//    return 0;
//}


//int main() {
//    int n; // khởi tạo giá trị trong vùng nhớ
//    // - - - - (n) - - - - -
//    scanf("%d", &n);
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        int num;
//        scanf("%d", &num);
//        arr[i] = num;
//    }
//
//    int tar;
//    printf("nhap target: ");
//    scanf("%d", &tar);
//    // '3' 5 2 9
//    // target 7
//
//    // 2 vong for long nhau
//    // 5 2
//    int a, b;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] + arr[j] == tar) {
//                a = arr[i];
//                b = arr[j];
//                break;
//            }
//        }
//    }
//    printf("%d %d", a, b);
//    return 0;
//}