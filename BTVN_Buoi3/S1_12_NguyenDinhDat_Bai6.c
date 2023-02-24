#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i, j;
	do {
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
	} while( n < 2 || n > 9);
	
	for (i = n; i <= n; i++) {
		for(j = 1; j<=9;j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}
