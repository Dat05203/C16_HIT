#include <stdio.h>
#include <stdlib.h>

int main() {
	float a;
	scanf("%f", &a);    // Nhap a
	float result = (a/3)*(a/3)*(a/3)*(a/3);   // Tinh pt
	// Dieu kien cua a
	if (a >= 2 && a <= 50) {
	    printf("%0.3f", result);
	}
	return 0;
}
