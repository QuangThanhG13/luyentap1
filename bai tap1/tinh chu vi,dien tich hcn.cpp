#include <stdio.h>
  float dientich(float chieudai, float chieurong){
  	return chieudai * chieurong;
  }
   float chuvi(float chieudai, float chieurong){
  	return 2*(chieudai * chieurong);
  }


int main() {
   int choice;
   float chieudai , chieurong;
   
 do{
 	printf("Nhap chieu dai:");
    scanf("%f", &chieudai);
    
    printf("Nhap chieu rong:");
    scanf("%f", &chieurong);
    
    printf("Chon 1 de tinh dien tich, chon 2 de tinh chu vi:")
    scanf("%d", &choice);

 switch (choice) {
 	case 1:
 	   printf("Dien tich hinh chu nhat : %.2f\n", dientich(chieudai,chieurong));
 	   break;
 	case 2:
 	   printf("chu vi hinh chu nhat : %.2f\n", chuvi(chieudai,chieurong));
 	   break;
 	default:
 	   printf("lua chon khong hop le.\n");
 	
 }
   printf("Nhap 1 de tiep tuc, nhap 0 de thoat: ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}



 
 
 

