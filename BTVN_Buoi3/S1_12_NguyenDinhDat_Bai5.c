#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	int i;
	int tong = 0;
	do {
		printf("Nhap so tu nhien n: ");
		scanf("%d", &n);
	} while(n < 0 || n > 100);
	
	// A = 1 + 2 + ... + n;
	for(i = 1; i <= n; i++) {
		tong += i;
	}
	printf("A = %d",tong);
	
	// B = 1 + 2 + 4 +...+ 2*n;
	tong = 0;
	i = 1;
	while(i <= 2) {
		tong += i;
		i++;
		while(i <= 2*n) {
			tong += i;
			i = i + 2;
		}
	}
	printf("\nB = %d", tong);
	
	// C = 1 + 3 + 5 +...+ (2*n + 1);
     i = 1;
     tong = 0;
     while( i <= (2*n+1) ) {
    	tong += i;
    	i = i + 2;
	}
	 printf("\nC = %d", tong);
}
