#include <stdio.h>
#include <string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sv[50];
    int n = 5;
    printf("Nhap thong tin sinh vien moi:\n");
    sv[n].id = n + 1;
    printf("Ten: ");
    fgets(sv[n].name, 50, stdin);
    printf("Tuoi: ");
    scanf("%d", &sv[n].age);
    printf("So dien thoai: ");
    scanf("%s", sv[n].phoneNumber);
    fflush(stdin);
    n++;
    printf("\nThong tin cac sinh vien sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }

    return 0;
}

