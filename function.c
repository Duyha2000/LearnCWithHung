#include <stdio.h>
#include "function.h"
#include <string.h>

void menu() {
    printf("1.Nhập số lượng và thông tin sách.\n2.Hiển thị thông tin sách.\n3.Thêm sách vào vị trí.\n4.Xóa sách theo mã sách.\n5.Cập nhật thông tin sách theo mã sách.\n6.Sắp xếp sách theo giá(tăng/giảm).\n7.Tìm kiếm sách theo tên sách.\n8.Thoát");
}

void inputBooks(struct Book books[], int *size) {
    int n;
    printf("nhap so luong: ");
    scanf("%d", &n);
    getchar(); // Xóa bộ đệm sau scanf
    for (int i = *size; i < *size + n; i++) {
        printf("Mã sách %d: ", i + 1);
        fgets(books[i].code, 50, stdin);
        // Xóa ký tự '\n' dư thừa
        printf("Tên sách %d: ", i + 1);
        fgets(books[i].name, 50, stdin);
        books[i].code[strcspn(books[i].code, "\n")] = '\0';
        printf("Author sách %d: ", i + 1);
        fgets(books[i].aut, 50, stdin);
        books[i].code[strcspn(books[i].code, "\n")] = '\0';
        printf("Price sách %d: ", i + 1);
        scanf("%f", &books[i].price);
        getchar();
        printf("Thể loại sách %d: ", i + 1);
        fgets(books[i].kind, 50, stdin);
        books[i].code[strcspn(books[i].code, "\n")] = '\0';
    }
    *size += n;
}

void showBooks(struct Book books[], int size) {
    printf("%-10s %-30s %-30s %-10s %-15s\n", "Code", "Name", "Author", "Price", "Category");
    printf("=======================================================================================\n");
    for (int i = 0; i < size; i++) {
        // Loại bỏ ký tự xuống dòng nếu có
        books[i].code[strcspn(books[i].code, "\n")] = '\0';
        books[i].name[strcspn(books[i].name, "\n")] = '\0';
        books[i].aut[strcspn(books[i].aut, "\n")] = '\0';
        books[i].kind[strcspn(books[i].kind, "\n")] = '\0';
        // In theo định dạng bảng
        printf("%-10s %-30s %-30s %-10.2f %-15s\n",
               books[i].code,
               books[i].name,
               books[i].aut,
               books[i].price,
               books[i].kind);
    }
}

void insertBooks(struct Book books[], int *size) {
    int pos;
    printf("nhap pos: ");
    scanf("%d", &pos);
    if (pos < *size && pos >= 0) {
        for (int i = *size; i > pos; i--) {
            books[i] = books[i - 1]; // books[3] = books[2]
        }
    } else {
        printf("không có vị trí");
    }

    // 3:           A B C
    //              0 1 2
    //  ------------------------
    // pos - 1: E   A E B C
    //              0 1 2 3
    getchar();
    printf("Nhập mã sách: ");
    fgets(books[pos].code, 50, stdin);
    books[pos].code[strcspn(books[pos].code, "\n")] = '\0';
    printf("Nhập tên sách: ");
    fgets(books[pos].name, 50, stdin);
    books[pos].code[strcspn(books[pos].code, "\n")] = '\0';
    printf("Nhập tác giả: ");
    fgets(books[pos].aut, 50, stdin);
    books[pos].code[strcspn(books[pos].code, "\n")] = '\0';
    printf("Nhập giá sách: ");
    scanf("%f", &books[pos].price);
    getchar();
    printf("Nhập thể loại: ");
    fgets(books[pos].kind, 50, stdin);
    books[pos].code[strcspn(books[pos].code, "\n")] = '\0';
    *size += 1;
}

void deleteBooks(struct Book books[], int *size) {
    char del[50];
    printf("nhap ma muon xoa: ");
    getchar();
    fgets(del, 50, stdin);
    del[strcspn(del, "\n")] = '\0';
    int pos = -1;
    // Size 5:  A B C D E
    // Code = C    ->
    // Size 4:  A B D E
    for (int i = 0; i < *size; i++) {
        if (strcmp(books[i].code, del) == 0) {
            pos = i;
        }
    }
    if (pos == -1) {
        printf("không tìm thấy code");
    } else {
        for (int i = pos + 1; i < *size; i++) {
            books[i - 1] = books[i];
        }
        *size -= 1;
    }

}

void updateBooks(struct Book books[], int size) {
    char codebook[50];
    printf("nhap ma sach: ");
    getchar();
    fgets(codebook, 50, stdin);
    codebook[strcspn(codebook, "\n")] = '\0';

    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].code, codebook) == 0) {
            getchar();
            books[i].code[strcspn(books[i].code, "\n")] = '\0';
            printf("Nhập tên sách: ");
            fgets(books[i].name, 50, stdin);
            books[i].code[strcspn(books[i].code, "\n")] = '\0';
            printf("Nhập tác giả: ");
            fgets(books[i].aut, 50, stdin);
            books[i].code[strcspn(books[i].code, "\n")] = '\0';
            printf("Nhập giá sách: ");
            scanf("%f", &books[i].price);
            getchar();
            printf("Nhập thể loại: ");
            fgets(books[i].kind, 50, stdin);
            books[i].code[strcspn(books[i].code, "\n")] = '\0';
        } else {
            printf("không có mã sách này");
        }
    }
}

void arrangeBooks(struct Book books[], int size) {
    struct Book temp;
    // inter change sort
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (books[i].price > books[j].price) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void searchBooks(struct Book books[], int size) {
    char names[50];
    printf("nhap ten sach");
    getchar();
    fgets(names, 50, stdin);
    names[strcspn(names, "\n")] = '\0';
    for (int i = 0; i < size; i++) {
        if (strcmp(names, books[i].name) == 0) {
            printf("thông tin sách: code %s name %s auth %s price %f category %s", books[i].code,
                   books[i].name, books[i].aut, books[i].price, books[i].kind);
        }
    }
}


