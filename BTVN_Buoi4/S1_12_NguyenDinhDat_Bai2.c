#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const int MAX = 100;
int main() {
	float a[MAX];
	int n, i, j;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	// Nhap mang
	for (i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
	// Sap xep mang
    for (i = 0; i <= n-1; i++){
        for(j = i+1; j < n; j++) {
        	if ((a[i] < 0 && a[j] < 0) && (a[i] < a[j])) {
        		float temp = a[i];
        		a[i] = a[j];
        		a[j] = temp;
			}
		}
		if((float)a[i] != (int)a[i]) {
		   printf(" %.1f ", a[i]);
	    }
	    else {
	    	printf(" %.0f ", a[i]);
		}
    }
}
