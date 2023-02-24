#include<iostream>
#include<cmath>

const int MAX = 100;
using namespace std;
void nhapMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
bool kiemTraSnt(int n) {
	if (n < 2) return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) return false;
		}
	} 
	return true;
}
void Them(int a[], int &n, int k, int index) {
	for(int i = n-1; i >= index; i--) {
		a[i+1] = a[i];
	}
	a[index] = k;
	n++;
}
void Xoa(int a[], int &n, int index) {
	for(int i = index + 1; i < n; i++) {
		a[i-1] = a[i];
	}
	n--;
}
// Them so k vao sau cac snt < 10
void xuLi(int a[], int &n, int x) {
	for( int i = 0; i < n; i++) {
		if(a[i] < 10 && kiemTraSnt(a[i]) == true) {
			Them(a,n,x,i+1);
		}
	}
}
// So chia het cho 3, khong chia het cho 5
void soDacBiet(int a[], int &n) {
	for(int i = 0; i < n; i++) {
		if(a[i] % 3 == 0 && a[i] % 5 != 0) {
			Xoa(a,n,i);
		}
	}
}
// Xoa bot phan tu trung nhau
void phanTuTrungNhau(int a[], int &n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] == a[j]) {
				Xoa(a,n,j);
				j--;
			}
		}
	}
}
int main() {
	int a[MAX];
	int n, x;
	do {
		cin >> n;
	}while(n < 1 || n >= 100);
	nhapMang(a,n);
	cin >> x;
	cout << "\n";
	xuLi(a,n,x);
	xuatMang(a,n);
	cout << "\n";
	soDacBiet(a,n);
	xuatMang(a,n);
	cout << "\n";
	phanTuTrungNhau(a,n);
	xuatMang(a,n);
	return 0;
}
