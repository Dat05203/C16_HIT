#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const int MAX = 100;
int main() {
	    int a[MAX];
   	    int chon;
	    int n, i, j, k, tam;
	    printf("\t\t===BAI TOAN TIM SO CHINH PHUONG===");
	    printf("\nNhap so phan tu: ");
	    scanf("%d", &n);
	    // Nhap cac phan tu vao mang
	    for(i = 0; i < n; i++){
		   printf("Nhap a[%d]: ", i);
		   scanf("%d", &a[i]);
	    }
	    
	    // Kiem tra so chinh phuong
	    int dem = 0;
	    printf ("\nCac so chinh phuong: ");
	    for(i = 0; i < n ; i++) {
		if ((float)sqrt(a[i]) == (int)sqrt(a[i])) {
			dem += 1;
			tam = a[i];
			printf("%d ", tam);
		}
		}
	    printf("\nSo luong so chinh phuong trong mang la: ");
	    printf("%d ", dem);
	    //printf("\nCac so chinh phuong do la: ");
	    //printf("%d ", tam);
	    printf("\n");
	    
	    printf("\t\t===BAI TOAN TIM SO HOAN HAO===");
	    printf("\nNhap so phan tu: ");
	    scanf("%d", &n);
		// Nhap cac phan tu vao mang
	    for(i = 0; i < n; i++){
		   printf("Nhap a[%d]: ", i);
		   scanf("%d", &a[i]);
	    }
	    
	    // Kiem tra so hoan hao
	    printf("Cac so hoan hao la: ");
	    dem = 0;
	    for(i = 0; i < n; i++) 
		{
			int sum = 0;
		    for(j = 1; j < a[i]; j++) {
                if(a[i] % j == 0) 
                   sum+=j;
		    }
            if(sum == a[i])
               { 
			      printf("%d ", a[i]);
			      dem += 1;
			   }
	    }
        printf("\nSo luong so hoan hao trong mang la: %d", dem);
    return 0;
}

