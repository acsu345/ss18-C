#include <stdio.h>
#include <string.h> 

struct SinhVien {
	char fullname[50];
	char phoneNumber[15];
	int age ; 
}; 

int main(){
	struct SinhVien sv1;
	printf("Moi ban nhap ten:");
	fgets(sv1.fullname, sizeof(sv1.fullname),stdin); 	
	printf("Moi ban nhap so dien thoai:");
	fgets(sv1.phoneNumber, sizeof(sv1.phoneNumber),stdin); 
	printf("Moi ban nhap tuoi:");
	scanf("%d", sv1.age);
	fflush(stdin); 
	printf("Ten cua sinh vien la: %s\n", sv1.fullname);
	printf("So dien thoai la: %s\n", sv1.phoneNumber);
	printf("Tuoi : %d", sv1.age);
	
	return 0; 
	
	
}
	
