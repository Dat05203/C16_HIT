#include<iostream>
#include<cmath>

const int MAX = 100;
using namespace std;
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
bool kiemTraSoChinhPhuong(int);
bool kiemTraSoNguyenTo(int);
void Chen(int a[], int &, int k, int index); 
bool kiemTraSoHoanHao(int);
int timUCLN(int);
void Xoa(int a[], int &, int); 
bool kiemSoChan(int n); 
int soNguyenToLonNhat(int a[], int n);
bool kiemTraSoChinhPhuongToanMang(int a[], int n);
bool kiemTraSoNguyenToToanMang(int a[], int n);
bool kiemTraSoHoanHaoToanMang(int a[], int n);
// Ham Chinh
int main() {
	int a[MAX], n, x;
	cout << "Nhap n = ";
	cin >> n;
	cout << "=====Nhap mang=====" << endl;
	nhapMang(a, n);
	cout << "Nhap x = ";
	cin >> x;
	int vitri1 = soNguyenToLonNhat(a,n);
	for(int i = 0; i < n; i++) {
//		if(kiemTraSoChinhPhuongToanMang(a,n) == true) {
//			Chen(a,n,x,i+1);
//			break;
//		}
		//else {
			//if(kiemTraSoNguyenToToanMang(a,n) == true) {
				Chen(a,n,x, vitri1 + 1);
		
			//}
//			else {
//				Chen(a,n,x,n);
//				break;
//			}
		//}
	}
	xuatMang(a,n);
	return 0;
}
// Cac ham dinh nghia
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
bool kiemTraSoChinhPhuong(int n) {
 	int sqr = sqrt(n);
 	if(sqr*sqr == n) {
 		return true;
	}
}
bool kiemTraSoChinhPhuongToanMang(int a[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(kiemTraSoChinhPhuong(a[i]) == true) {
			dem++;
		}
	}
	if(dem == 0) return false;
	if(dem > 0) return true;
}
bool kiemTraSoNguyenTo(int n) {
	if(n < 2) return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) return false;
		}
	}
	return true;
}
bool kiemTraSoNguyenToToanMang(int a[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(kiemTraSoNguyenTo(a[i]) == true) {
			dem++;
		}
	}
	if(dem == 0) return false;
	if(dem > 0) return true;
}
void Chen(int a[], int &n, int k, int index) {
	for(int i = n-1; i >= index; i--) {
		a[i+1] = a[i];
	}
	a[index] = k;
	n++;
}
bool kiemTraSoHoanHao(int n) {
	int sum = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			sum += i;
		}
	}
	if(sum != n) return false;
	else {
	    return true;
	}
}
bool kiemTraSoHoanHaoToanMang(int a[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(kiemTraSoHoanHao(a[i]) == true) {
			dem++;
		}
	}
	if(dem == 0) return false;
	if(dem > 0) return true;
}
int timUCLN(int n) {
    int max = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
		   max = i;
		}
	}
	return max;
}
void Xoa(int a[], int &n, int index) {
	for(int i = index+1; i < n; i++) {
		a[i-1] = a[i];
	}
	n--;
}
bool kiemSoChan(int n) {
	if(n % 2 != 0) {
	    return false; 
    }
	else return true;
}
int soNguyenToLonNhat(int a[], int n) {
	int vitri = 0, max = a[vitri];
	for(int i = 0; i < n ; i++) {
		if(kiemTraSoNguyenTo(a[i]) == true) {
		   if(a[i] > max) {
		   	  max = a[i];
		   	  vitri = i;
		   }
		}
	}
	return vitri;
}

