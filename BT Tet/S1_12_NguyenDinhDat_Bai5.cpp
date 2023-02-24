#include<iostream>
#include<cmath>

using namespace std;
const int MAX = 100;
void Nhap_n(int &n) {
	do {
		cin >> n;
	}while(n <= 3 || n > 100);
}
void nhapMang(int a[], int n) {
	for(int i = 0 ; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void timKiem(int a[], int n) {
	int i = 0, j = n - 1;
	while(i < j) {
		while(a[i] % 2 != 0) {
			i++;
		}
	    while (a[j] % 2 == 0 && i < j) j--;
	    if(i < j) {
		   swap (a[i], a[j]); 
	    }
    }
}
int main() {
	int a[100];
	int n;
	Nhap_n(n);
	nhapMang(a,n);
	timKiem(a,n);
	xuatMang(a,n);
	return 0;
}

