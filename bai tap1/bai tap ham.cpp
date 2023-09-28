#include <stdio.h>
#include <math.h>

//lam theo kieu mang 
//bt : kiem tra xem trong cac so duoi co chu so 6 khong va no co chia het cho 8 khong 
//pp: tach rieng ra 2 mang de lam 

int check1(int n) {
	while(n) {
		if(n % 10 == 6) return 1;
		n /= 10;	
	}
	return 0;
}
int check2 (int n) {
	int sum = 0 ; 
	while (n) {
		sum += n%10;
		n /= 10;
	}
	return sum % 8 == 0;
}

int main (){
	for (int i ; i<=1000 ; i++) {
		if (check1(i) ==1 && check2(i) == 1) printf("%d  "	 ,  i);
		 
	}
	return 0;
}
