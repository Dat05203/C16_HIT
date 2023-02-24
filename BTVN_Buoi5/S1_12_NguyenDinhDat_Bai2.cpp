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
// Tìm só âm dau tiên
bool Tim_so_am(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0 ) return false;
	}
	return true;
}
// Ham them phan tu
void Them_phan_tu(int a[], int &n, int x, int k) {
	for(int i = n - 1; i >= k; i--) {
		a[i+1] = a[i];
	}
	a[k] = x;
	n++;    
}
// Chen
void Chen_so(int a[], int &n, int x) {
	if (Tim_so_am(a,n) == false) {
		for(int i = 0; i < n; i++) {
			if (a[i] < 0) {
				Them_phan_tu(a,n,x,i+1); // Chen vao vi tri sau sô âm dau tiên
				break;
			}
		}
	}
	else {
		Them_phan_tu(a,n,x,n); // Chen cuoi mang
	}
}
// Sap xep tang dan
void Sap_xep(int a[], int n) {
	for(int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if ( a[i] > a[j] ) {
			    int temp = a[i];
			    a[i] = a[j]; 
			    a[j] = temp;
			}
		}
	}
}
// Dao vi tri a[0] = a[n-1]
void Dao_mang(int a[], int n) {
	Sap_xep(a,n);
	for(int i = 0; i < n ; i++) {
		int c = a[0];
		a[0] = a[n-1];
		a[n-1] = c;
	}
}
int main() {
	int a[MAX];
	int n, x, k ;
	do {
		cout << "Nhap so n = ";
		cin >> n;
	} while (n <= 0 || n >= 100);
	Nhap_mang(a,n);
	cout << "\n";
	Xuat_mang(a,n);
	cout << "\n\t\tPHAN 1";
	cout << "\n\nNhap so muon them: ";
	cin >> x;
	cout << "\nMang sau khi them " << x << " la: ";
	Chen_so(a,n,x);
	Xuat_mang(a,n);
	cout << "\n\n\t\tPHAN 2";
	cout << "\n\nMang da duoc sap xep la: ";
	Dao_mang(a,n);
	Xuat_mang(a,n);
	return 0;
}
