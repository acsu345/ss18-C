#include <stdio.h>
#include <string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sv[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0123456788"},
        {3, "Tran Van C", 22, "0123456787"},
        {4, "Pham Thi D", 23, "0123456786"},
        {5, "Hoang Van E", 24, "0123456785"}
    };
    int n = 5;
    printf("Nhap ten sinh vien can xoa: ");
    char delName[50];
    fgets(delName, sizeof(delName), stdin);
    delName[strcspn(delName, "\n")] = '\0';
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].name, delName) == 0) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                sv[j] = sv[j + 1];
            }
            n--;
            break;
        }
    }
    if (!found) {
        printf("Sinh vien co ten %s khong ton tai.\n", delName);
    } else {
        printf("\nThong tin cac sinh vien sau khi xoa:\n");
        for (int i = 0; i < n; i++) {
            printf("Sinh vien thu %d:\n", i + 1);
            printf("ID: %d\n", sv[i].id);
            printf("Ten: %s\n", sv[i].name);
            printf("Tuoi: %d\n", sv[i].age);
            printf("So dien thoai: %s\n", sv[i].phoneNumber);
        }
    }

    return 0;
}

