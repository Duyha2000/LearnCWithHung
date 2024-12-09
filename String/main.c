#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20];
    int choice;

    do {
        printf("Menu chuc nang \n");
        printf("0.nhap chuoi ky tu: \n");
        printf("1.in do dai chuoi\n");
        printf("2. in dao nguoc\n");
        printf("3. in so luong chu cai\n");
        printf("4. in so luong chu so\n");
        printf("5. in so luong ky tu dac biet\n");
        printf("6. Exit\n");
        printf("nhap lưa chon");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 0: {
                printf("Nhap chuoi ky tu:");
                fgets(str, 20, stdin);
                break;
            }
            case 1: {
                int length = strlen(str);
                printf("Độ dài chuỗi là: %d", length);
                break;
            }
            case 2: {
                int length = strlen(str);
                for (int i = length - 1; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                break;
            }

            case 3: {
                int count = 0;
                int length = strlen(str);
                for (int i = 0; i < length; i++) {
                    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                        count++;
                }
                printf("%d", count);
                break;
            }
            case 4: {
                int count = 0;

                int length = strlen(str);
                for (int i = 0; i < length; i++) {
                    if (str[i] >= '0' && str[i] <= '9')
                        count++;
                }
                printf("%d", count);
                break;
            }
            case 5: {
                int count = 0;
                int length = strlen(str);
                // 1. số 2. chữ 3. khác
                // nếu k phải (1 và 2) -> 3
                // hello123A4 -> 4
                // hello123 -> 0

                // chữ cái in thường hoặc chữ cái in hoa hoặc số
                //
                for (int i = 0; i < length; i++) {
                    if (!(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 65 && str[i] <= 90) &&
                        !(str[i] >= 48 && str[i] <= 57)) {
                        count++;
                    }
                }
                printf("%d", count);
                break;
            }
            case 6: {
                printf("exit");
                break;

            }
            default:
                printf("Invalid option");
                break;
        }
    } while (choice != 6);
//
    return 0;
}