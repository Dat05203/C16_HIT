#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const int MAX = 100;
int main() {
	int a[MAX];
	int n, i, j;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	// Nhap cac phan tu vao mang
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// Tim va tinh tong cac so nguyen to 
    int sum = 0; 
    for(i = 0; i < n; i++) {
    	if (a[i] >= 2) 
		{
    		int k = 1;
    		for(j = 2; j <= sqrt(a[i]); j++) 
			{
    			if(a[i] % j == 0) k = 0;
			}
		    if (k == 1) 
			{
			    printf("%d ", a[i]);
			    sum += a[i];
			}
		}
	}
	printf("\n%d ", sum);
}
