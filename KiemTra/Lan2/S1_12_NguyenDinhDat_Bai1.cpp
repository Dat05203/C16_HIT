#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<iomanip>

using namespace std;
void nhap(int *a, int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuat(int *a, int n) {
	for(int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
}
void tinhToan(int *a, int n) {
	int sum,count;
	sum = count = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] % 5 == 0 && a[i] % 3 == 0) {
			sum += a[i];
			count++;
		}
	}
	if(sum == 0) {
		cout << " " << "NO" << endl;
	}
	if (sum > 0) {
	    cout << " " << sum << " " << sum/count << endl;
	}
}
bool SCP(int n) {
	int sqr = sqrt(n);
	if(sqr*sqr != n) {
		return false;
	}
	return true;
}
void deleteAll(int *a, int &n, int pos) {
	for(int i = pos+1; i < n; i++) {
		a[i-1] = a[i];
	}
	n--;
	a = (int *)realloc(a,n*sizeof(int));
}
void deleteNum(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		if(SCP(a[i]) == true) {
			deleteAll(a,n,i);
			i--;
		}
	}
	xuat(a,n);
}
int soLonNhat(int *a, int n) {
	int max = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int soNhoNhat(int *a, int n) {
	int min = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] < min ) {
			min = a[i];
		}
	}
	return min;
}
void insertAll(int *&a, int &n, int x, int pos) {
	n++;
	a = (int *)realloc(a,n*sizeof(int));
	for(int i = n-1; i >= pos; i--) {
		a[i] = a[i-1];
	}
	*(a+pos) = x;
}
void insertNum(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		if(a[i] == soNhoNhat(a,n)) {
			insertAll(a,n,soLonNhat(a,n),i);
			i++;
		}
	}
	xuat(a,n);
}
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	nhap(a,n);
	cout << endl;
	xuat(a,n);
	cout << endl;
	tinhToan(a,n);
	deleteNum(a,n);
	cout << endl;
	insertNum(a,n);
	delete[] a;
	return 0;
}
