#include <stdio.h>
#include <math.h>

void nhapHeSo(float *a, float *b, float *c) {
    printf("Nhap he so a: ");
    scanf("%f", a);

    printf("Nhap he so b: ");
    scanf("%f", b);

    printf("Nhap he so c: ");
    scanf("%f", c);
}
void xacDinhNghiem(float a, float b, float c) {
	float delta = b*b - 4 * a * c;
	
	if (delta > 0){
		float x1 = (-b+sqrt(delta))/(2*a);
		float x2 = (-b+sqrt(delta))/(2*a);
		printf("phuong trinh co 2 nghiem thuc :\n");
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	} else if (delta = 0){
		float x = -b/2*a;
        printf("phuong trinh co nghiem kep :\n");
		printf("x %.2f\n", x);
	} else {
		printf("phuong trinh vo nghiem\n");
	}
}
int main() {
   int choice;
   float a , b, c;
   
 do{
 	printf("Menu :\n");
    printf("1.nhap 3 he so a,b,c : \n");
    printf("2. xac dinh nghiem : \n");
    printf("3.Thoat:\n");
    printf("4.Chon :")
	scanf("%d", &choice);

 switch (choice) {
 	case 1:
 	  nhapHeSo(&a, &b, &c);
 	   break;
 	case 2:
 	   xacDinhNghiem(a, b, c);
 	   break;
 	case 3:
       printf("thoat khoi chuong trinh.\n");
 	   break;
 	default:
 	   printf("lua chon khong hop le moi chon lai.\n");
 	
 } while (choice != 3);

    return 0;
}


