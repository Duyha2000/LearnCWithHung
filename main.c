#include <stdio.h>
#include <string.h>

struct Book {
    char code[50];
    char name[50];
    char aut[50];
    float price;
    char kind[50];
};
//    Khai báo mảng sách

// 1 array 50 số nguyên: int arr[50]
struct Book books[50];

int main(void) {
    int choice;

    do {
        printf("1.Nhập số lượng và thông tin sách.\n2.Hiển thị thông tin sách.\n3.Thêm sách vào vị trí.\n4.Xóa sách theo mã sách.\n5.Cập nhật thông tin sách theo mã sách.\n6.Sắp xếp sách theo giá(tăng/giảm).\n7.Tìm kiếm sách theo tên sách.\n8.Thoát");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int n;
                printf("nhap so luong: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Mã sách %d: ", i + 1);
                    fgets(books[i].code, 50, stdin);
                    printf("Tên sách %d: ", i + 1);
                    fgets(books[i].name, 50, stdin);
                    printf("Author sách %d: ", i + 1);
                    fgets(books[i].aut, 50, stdin);
                    printf("Price sách %d: ", i + 1);
                    scanf("%f", &books[i].price);
                    printf("Thể loại sách %d: ", i + 1);
                    fgets(books[i].kind, 50, stdin);
                }
                break;
            }
            case 2: {
                for (int i = 0; i < 50; i++) {
                    printf("thông tin sách %d", i + 1);
                    printf("%s\n%s\n%s\n%f\n%s", books[i].code, books[i].name, books[i].aut, books[i].price,
                           books[i].kind);
                }
                break;
            }
        }
    } while (choice != 8);
    return 0;
}