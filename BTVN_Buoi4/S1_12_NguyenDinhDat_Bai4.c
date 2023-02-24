#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

const int MAX = 100;
int main() {
    float a[MAX];
    int n, i, j;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    
    // Nhap cac gia tri phan tu
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    // Tim so lon nhat trong mang 
    int max = a[0];
    for (i = 0; i < n; i++) {
    	if (a[i] > max) {
    		max = a[i];
		}
    }
    printf("Phan tu lon nhat la: %d\n", max);
    printf("Tai cac vi tri la: ");
    for(i = 0; i < n; i++) {
    	if (a[i] == max) {
    		printf("%d ", i+1);
		}
	}
    return 0;
}
    
