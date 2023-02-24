#include<bits/stdc++.h>
#include<cmath>

using namespace std;
void nhapMang(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void sapXepTangDan(int *a, int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	xuatMang(a,n);
}
void deleteAll(int *&a, int &n, int pos) {
	for(int i = pos+1; i < n; i++) {
		a[i-1] = a[i];
	}
	realloc(a,(n-1)*sizeof(int));
	n--;
}
void chuyenAmThanhDuong(int *a, int n) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] < 0) {
			a[i] = abs(a[i]);
			count++;
		}
	}
	sapXepTangDan(a,n);
	cout << endl << count << endl;
	deleteAll(a,n,count);
	xuatMang(a,n);
}
int UCLN(int a, int b) {
	int d;
	while(b != 0) {
		d = a%b;
	    a = b;
	    b = d;
	}
	return a;
}
void tinhToan(int *a, int n) {
	int sumchan = 0, sumle = 0, sum = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) {
			sumchan += a[i];
		}
		else {
			sumle += a[i];
		}
	}
	cout << sumchan << endl;
	cout << sumle << endl; 
	cout << UCLN(sumchan,sumle) << endl;
    sum = sumchan + sumle;
	int tinhtoan = sum - (20 * UCLN(sumchan,sumle));
    if(tinhtoan < 0) cout << "True";
    else cout << "False";
}
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	nhapMang(a,n);
	cout << endl;
	cout << "\t\t=====MANG SAU KHI YEU CAU=====" << endl;
	sapXepTangDan(a,n);
	cout << endl;
	chuyenAmThanhDuong(a,n);
	cout << endl;
	tinhToan(a,n);
	delete[] a;
	return 0;
}

