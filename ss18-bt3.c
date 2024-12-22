#include <stdio.h>
#include <string.h>
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sv1[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        fgets(sv1[i].name, 50, stdin);
        printf("Tuoi: ");
        scanf("%d", &sv1[i].age);
        printf("So dien thoai: ");
        scanf("%s", sv1[i].phoneNumber);
        fflush(stdin);
    }
    for (i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n", sv1[i].phoneNumber);
    }

    return 0;
}

