#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	float tong_tien = n*m;
	if (( n >= 1 && n <= 99) && ( m >= 7000 && m <= 200000) && ( m % 100 == 0)) {
		if (n > 5 && n % 2 != 0) {
			printf("%f", tong_tien*0.8);
		}
		else if (n > 4 && n % 2 == 0) {
			printf("%f", tong_tien*0.85);
		}
		else {
			printf("%f", tong_tien);
		}
	}
	return 0;
}
	
