#include <stdio.h>
struct SinhVien{
	char id[20];
	char name[50];
	int age;
	char phoneNumber[15]; 
};
//tao ham update sinh vien theo nguoi dung nhap
 void update(struct SinhVien *sv[], int n, char find[]); //Khai bao nguyen mau ham 
int main(){
	char find[50]; 
	struct SinhVien sv[50]={
		{
			"abcd01",
			"Nguyne Van A",
			18,
			"0646" 
		},
		{
			"AHJSGD",
			"Hoang tha ",
			24,
			"5643" 
		},
		{
			"abc04",
			"Nguyen Thanh",
			23,
			"3958392" 
		},
		{
			"ieruch",
			"Hoang Hoa ",
			19,
			"089987663" 
		},
		{
			"abc05",
			"Phung Tien",
			25, 
			"0587397563"
		}
	};
	printf("Moi ban nhap id cua sinh vien can update: ");
	fgets(find, sizeof(find), stdin);  
	update(sv, 5, find); 
	
	return 0;
}
	update(struct SinhVien *sv[], int n, char find[]){
 //Phai kiem tra xem id nguoi dung nhap co ton tai hay khong?
	int flag = -1; 
 	for(int i = 0 ; i< n;i++){
 		if(strcmp(find, sv[i]->id){
 			flag = i;
			 break; 
		}
		if (flag == -1){
			printf("Khong co id thoa man"); 
		}else{
			//sv[flag].name = "le minh man";
			//strcpy(sv[flag].name,"Le minh man"); 
			strcpy(sv[i]->name, "Nguyen van N"); 
		} 
	 }  
  
}
