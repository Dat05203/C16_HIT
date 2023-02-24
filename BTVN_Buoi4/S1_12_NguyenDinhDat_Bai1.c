#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

const int MAX = 100;
int main() {
    int a[MAX];
    int n, i;
    int dem1, dem2;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    // Nhap cac gia tri phan tu
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    // Hien thi cac phan tu trong mang
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    // Kiem tra cac phan tu trong mang tang hay giam
    dem1 = 0; dem2 = 0;
    for (i = 0; i < n-1; i++) {
      if (a[i] < a[i+1]) {
          dem1 ++;
      }  
      else if (a[i] > a[i+1]) {
          dem2 ++;
      }
    }
    if (dem1 == n-1) printf("\nYES");
    else if (dem2 == n-1) printf("\nNO");
    else printf("\n-1");
    
    getch();
    return 0;
}
