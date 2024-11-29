#include <stdio.h>

int main() {
    FILE *f;
//    f = fopen ("ten_file", "mode"); // r/o/e
//Mode:
//r	Mở file để đọc	Nếu file không tồn tại thì hàm fopen() trả về con trỏ NULL
// w	Mở file để ghi	Nếu file đã tồn tại thì sẽ làm việc với file đó, nếu file chưa tồn tại sẽ tạo 1 file mới
// a	Mở file text lên để ghi tiếp vào cuối file mà không xóa nội dung cũ trong file	Nếu file đã tồn tại thì sẽ làm việc với file đó, nếu file chưa tồn tại sẽ tạo 1 file mới
//    f = fopen("/Users/mac0s/Documents/LearnCWithHung/IOFIle/input.txt", "r");

    f = fopen("/Users/mac0s/Documents/LearnCWithHung/IOFIle/output.txt", "w");
    char s[100] = "28tech.com.vn";
//    Ghi vào file:  fprintf(f, ...);
    fprintf(f, "%d %.2lf %.c %s\n", 100, 3.14, '@', s);
    fclose(f);
    return 0;
}