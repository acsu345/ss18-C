#include <stdio.h>
struct SinhVien{
	char fullName[50];
	char phoneNumber[15];
	int age; 
};
int main(){
	struct SinhVien sv1;
	strcpy(sv1.fullName,"Nguyen Hoang Phuc");
	strcpy(sv1.phoneNumber,"0123456789");
	sv1.age = 18; 
	printf("Ten sinh vien la: %s \n", sv1.fullName);
	printf("So dien thoai la: %s \n", sv1.phoneNumber);
	printf("Tuoi:%d ", sv1.age);
	
	return 0; 
} 

