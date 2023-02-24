#include<iostream>

const int MAX = 100;
using namespace std;
// Nhap
void Nhap_mang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "\nNhap a[" << i << "]: ";
		cin >> a[i];
	}
}
// Xuat
void Xuat_mang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
// Kiem tra so den dui
bool Kiem_tra_SDD(int n) {
	 int d;
     while(n > 0) {
     	d = n % 10;
     	if(d != 4 && d != 7) return false;
     	n /= 10;
	 }
	 return true;
}
// Xoa 
void Xoa_so(int a[], int &n, int vi_tri) {
	for(int i = vi_tri + 1; i < n; i++) {
		a[i-1] = a[i];
	}
	n--;
}
void Xoa_SDD(int a[], int &n) {
	for(int i = 0; i < n; i++) {
		if (Kiem_tra_SDD(a[i])== true) {
			Xoa_so(a, n, i);
		}
	}
}
// Sap xep mang tang dan
void Sap_xep(int a[], int n) {
    for(int i = 0; i < n; i++) {
       for(int j = i+1; j < n; j++) {
       	  if(a[i] > a[j]) {
       	   	int temp = a[i]; 
       	   	a[i] = a[j];
       	   	a[j] = temp;
		  }
	   }
	}
}
int main() {
	int a[MAX],b[MAX], n, m;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while(n <= 0 || n >= 100);
	cout << "\t\tMANG BAN DAU\n";
	Nhap_mang(a,n);
	cout << "\n";
	Xuat_mang(a,n);
	cout << "\n\n\t\tMANG SAU KHI SAP XEP\n";
    Xoa_SDD(a,n);
    Sap_xep(a,n);
	Xuat_mang(a,n);
	return 0;
}
