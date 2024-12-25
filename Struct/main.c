#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    char phone[20];
};

void delete(char name1[20], struct Student students[50]) {
    // xác định được vị trí cần xóa
    // Khởi tạo 1 array mới với size - 1
    // Gán giá trị array cũ sang mới
    // Gán giá tr từ array mới sang cũ ( đồng thời giamr size đi 1)

}

for (
int i = 0;
i < 5; i++) {
if (
strcmp(name1, student[i]
.name) == 0) {
for (
int i = student[i + 1];
i < 5;
i++) {
student[i] = student[i + 1];
}
} else printf("không tồn tại");
}

//}

int main(void) {
//    struct Student students[50] = {
//            {001, "hung",  "09838"},
//            {002, "ngo",   "8593032"},
//            {003, "mo",    "489092"},
//            {004, "canh",  "54242"},
//            {005, "nhung", "094903"}
//    };

// ngo -> 1
// ngo ở vị trí mấy trong array:
// ngo -> vòng lặp for để so sánh -> pos = -1 - > pos

//    char name[10];
//    printf("nhap name");
//    scanf("%c", &name);
//
//    delete(name, students);
    // 2 4 7 9 5 -> Xóa số 7
    // 0 1 2 3 4
//    int size = 5;
//    int arr[size] = {2, 4, 7, 9, 5};
//
//    int newArr[size - 1]; // Gán các phần tử mảng cũ sang mảng mới
//    for (int i = 0; i < 2; i++) {
//        newArr[i] = arr[i]; // 2 4
//    }
//    for (int i = 2; i < 4; i++) {
//        newArr[i] = arr[i + 1];
//    }
//
//    // 2 4 9 5
//    // Gán mảng mới va mảng cũ (đồng thời giảm kích thước mảng cũ đi 1)
//    for (int i = 0; i < 4; i++) {
//        arr[i] = newArr[i];
//    }
//
//    for (int i = 0; i < 4; i++) {
//        printf("%d \t", arr[i]);
//    }
//
//    size--;


    return 0;
}