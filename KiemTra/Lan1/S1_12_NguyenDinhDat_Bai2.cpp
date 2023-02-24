#include<iostream>
#include<cmath>

using namespace std;
const int MAX = 100;
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
bool kiemTraSCP(int n) {
	int can = sqrt(n);
	if(can*can != n) {
		return false;
	}
	return true;
}
int trungBinhCong(int a[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(kiemTraSCP(a[i]) == true) {
			sum+= a[i];
		}
	}
	return sum;
}
int demSCP(int a[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(kiemTraSCP(a[i]) == true) {
			dem++;
		}
	}
	return dem;
}
bool kiemTraSNT(int n) {
	if(n < 2) return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) return false;
		}
	}
	return true;
}
void Chen(int a[], int &n, int x, int index) {
	for(int i = n-1; i >= index; i--) {
		a[i+1] = a[i];
	}
	n++;
	a[index] = x;
}
int main() {
	int a[MAX];
	int n, k;
	do {
		cin >> n;
	}while(n <= 0 || n >= 100);
	nhapMang(a,n);
	cin >> k;
	if(demSCP(a,n) == 0) cout << "NO";
	else {
		cout << demSCP(a,n) << endl;
	}
	float tbc = 1.0*trungBinhCong(a,n)/demSCP(a,n);
	cout << tbc << endl;
	for(int i = 0; i < n; i++) {
		if(kiemTraSNT(a[i]) == true) {
			Chen(a,n,k,i);
			i++;
		}
	}
	xuatMang(a,n);
}
