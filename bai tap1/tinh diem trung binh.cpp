#include <stdio.h>

int main() {
   char hoTen[50];
   long diemToan, diemVan, diemTrungBinh;

   printf("NHAP HO TEN HOC SINH: ");
   scanf(" %[^\n]", hoTen);

   printf("NHAP DIEM TOAN: ");
   scanf("%ld", &diemToan);

   printf("NHAP DIEM VAN: ");
   scanf("%ld", &diemVan);

   diemTrungBinh = (diemToan + diemVan) / 2;

   printf("\nThong tin hoc sinh:\n");
   printf("Ho ten: %s\n", hoTen);
   printf("Diem toan: %ld\n", diemToan);
   printf("Diem van: %ld\n", diemVan);
   printf("Diem trung binh: %ld\n", diemTrungBinh);

   return 0;
}

