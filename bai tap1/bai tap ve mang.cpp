#include <stdio.h>
#include <math.h>

int nt(int n) {
	for(int i = 2 ; i <= sqrt(n); i++) {
		if (n % i == 0 ) return 0;
	}
	return 1;
}

int main() {
	int n; 
	scanf ("%d ", &n);
	int a[n];
	//nhap cac phan tu trong mang
	for (int i = 0 ; i < n ; i++ ) scanf("%d " , &a[i]);
	int min = 0;
    for (int i = 0; i < n ;
	 i++){
    	if (a[i] < min) min = a[i]; 
		 
	}
	printf("%d" , min);
	return 0;
}
