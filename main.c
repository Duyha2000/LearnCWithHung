#include <stdio.h>

int main(void) {
    int a, b;
    // a = 1 ->  b = 50
//    while:
    printf("nhap a, b");
    scanf("%d%d", &a, &b);
//   while: lặp cho đến khi
    while (a < b) {
        if (a % 3 == 0 && a % 5 == 0) {
            printf("%d ", a);

        }
        a++;
    };
    return 0;
}

//  int n;
//    int sum = 0;
//    printf("nhap n");
//    scanf("%d", &n);
//    // tính tổng các số trong array
//    for (int i = n; i >= 1; i--) {
//        sum += i;
//    }
//    printf("%d", sum);
// in giá trị trong vòng lăp

// n = 5
//    taoj 1 biến để nhân các giá trị vào với nhau (store)
//int multiply = 1;
// 5 * 4 * 3 * 2 * 1
// += *=
// i là bin tăng hoặc giảm dâ
// 5 - > 1
//   1.        2.        4.
// i = 3
// BT: Nhập vào 1 số và tính tổng từ 1 đến số đó, ví dụ nhập n = 5, ta có 1+2+3+4+5=15
//    for (int i = n; i >= 1; i--) {
////        3. run code
//        multiply = multiply * i;
////        multiply *=i;
//    }
//    while (n < 1) {
//    n*=n--;
//
//    }

//    // 90 -> 100 (thằng nào chẵn thì in ra)
//    while (n <= 100) {
//        if (n % 2 == 0) {
//            printf("%d ", n); // 90
//        }
//        // ở cuối vòng lặp sẽ là biến đếm tăng hoặc giảm dan
//        n++;
//    }
// Bài tập menu chuwsc năng
// Validate
// Nhập 1 chuỗi, xem chuô đấy có >10 ký tự hay không, nếu nhỏ hơn in ra lỗi
//    int a, b, temp;
//    printf("nhap 2 so a b");
//    scanf("%d %d", &a, &b);
//    temp = a;
//    a = b;
//    b = temp;
//    printf("%d %d", a, b);




// Ex1: a. Check if an integer n is even or odd:
//Write a program to check if an integer n entered from the keyboard is even or odd. If it is even, print "Even number".
//If it is odd, print "Odd number"
//    int n;
//    printf("nhap vao 1 so:");
//    scanf("%d", &n);
// Trong if else so sánh 2 vế dùng ==
//    if (n % 2 == 0) printf("even num");
//    else printf("odd num");
// ternary operator ? : sử dụng khi có đieều kiện if else đơn giản
// condition ? statement true : statement false;
//    (n % 2 == 0) ? printf("even num") : printf("odd num");

//Accept a character input and determine if it is an uppercase letter, a lowercase letter, or a non-letter character.
//
//Output:
//
//For uppercase letters, print "upper-case alphabet".
//For lowercase letters, print "lower-case alphabet".
//For non-letter characters, print "not an alphabet".


// Ex2:  char c;
//    printf("nhap ky tu:");
//    scanf("%c", &c);
//
//    if (c >= 'a' && c <= 'z') {
//        printf("lower case");
//    } else if (c >= 'A' && c <= 'Z') {
//        printf("upper case");
//    } else printf("invalid");

//  Ex3: int n;
//    printf("nhap diem:");
//    scanf("%d", &n);
//    if (n <= 50) {
//        printf("weak");
//    } else if (n <= 60) {
//        printf("avg");
//    } else if (n <= 75) {
//        printf("good");
//    } else if (n <= 90) {
//        printf("very good");
//    } else printf("excellent");
//

// int n;
//    printf("nhap nam:");
//    scanf("%d", &n);
//
//    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
//        printf("leap");
//    } else
//        printf("regular");
// int day;
//    printf("nhap vao 1 ngày:");
//    scanf("%d", &day);
//    switch (day) {
//        case 0:
//            printf("sunday");
//            break;
//        case 1:
//            printf("monday");
//            break;
//        case 2:
//            printf("tuesday");
//            break;
//        case 3:
//            printf("wed");
//            break;
//        case 4:
//            printf("thu");
//            break;
//        case 5:
//            printf("fri");
//            break;
//        case 6:
//            printf("sat");
//            break;
//        default:
//            printf("invalid");
//    }
//    switch: thay đổi (công tắc bóng đèn) switch()
//      case : trường hợp
// Phân biệt switch case and if else

//   int a, b;
//    char c;
//    printf("nhap a:");
//    scanf("%d", &a);
//    printf("\nnhap b:");
//    scanf("%d", &b);
//    printf("nhap phep toan (+, -, *, /)");
//    // Khoảng trắng trước %c bỏ qua ký tự thừa trong bộ đệm
//    scanf(" %c", &c);
//
//    switch (c) {
//        case '+':
//            printf("\n%d + %d = %d", a, b, a + b);
//            break;
//        case '-':
//            printf("\n%d - %d = %d", a, b, a - b);
//            break;
//        case '*':
//            printf("\n%d * %d = %d", a, b, a * b);
//            break;
//        case '/':
//            printf("\n%d / %d = %d", a, b, a / b);
//            break;
//        default:
//            printf("invalid");
//
//
//    }

// int n;
//    printf("nhap so giay");
//    scanf("%d", &n);
//    // 3910: 1 giờ
//    // 310 : 60 = 5 dư 10
//
//    // 3910 : 3600 = 1 dư 310
//    printf("quy doi %d gio %d phut %d giay", n / 3600, (n % 3600) / 60, n % 60);