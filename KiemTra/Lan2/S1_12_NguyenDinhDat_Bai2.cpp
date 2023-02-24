#include<bits/stdc++.h>

using namespace std;
void nhap(int *a, int n) {
	for(int i = 0; i < n; i++)
		{
		cin >> a[i];
		}
}
void xuat(int *a, int n) {
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void khoangCachHaiSoChan(int *a, int n) {
	int ichan1, ichan2, count, chan1, chan2;
    chan1 = -1;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			chan1 = a[i];
			ichan1 = i;
		}
	}
	for(int j = n-1; j >= 0; j--) {
		if(a[j] % 2 == 0) {
			chan2 = a[j];
			ichan2 = j;
		}
    }
	if(chan1 == -1) cout << "False";
	else if(chan1 == chan2) cout << chan1;
	else {
		cout << abs(ichan2-ichan1) << endl;
		int temp = a[ichan1];
		a[ichan1] = a[ichan2];
		a[ichan2] = temp;
		xuat(a,n);
	}
}
void deleteAll(int *&a, int &n, int pos) {
	for(int i = pos+1; i < n; i++) {
		a[i-1] = a[i];
	}
	realloc(a,(n-1)*sizeof(int));
	n--;
}
void deleteNum(int *a, int &n, int k) {
	int cnt = 0;
	for(int i = 0; i <= n; i++) {
		if (k == i) {
			deleteAll(a,n,i-1);
			cnt++;
			break;
	    }
	}
	if(cnt > 0) xuat(a,n);
	else cout << "No";
}
int soNhoThuHai(int *a, int n) {
	int min1 = a[0], max = a[0];
	for(int i = 1; i < n; i++) {
		if(min1 > a[i]) min1 = a[i];
		if(max < a[i]) max = a[i];
	}
	int min2 = max;
	for(int i = 0; i < n; i++) {
		if(a[i] < min2 && a[i] != min1) {
			min2 = a[i];
		}
	}
	return min2;
}
void insertAll(int *&a, int &n, int x, int pos) {
	n++;
	a = (int *)realloc(a,n*sizeof(int));
	for(int i = n-1; i >= pos; i--) {
		a[i+1] = a[i];
	}
	*(a+pos) = x;
}
void insertNum(int *&a, int &n) {
	insertAll(a,n,soNhoThuHai(a,n),1);
	xuat(a,n);
}
int main() {
	int n, k;
	cin >> n;
	int *a = new int[n];
	nhap(a,n);
	cin >> k;
	cout << endl;
	xuat(a,n);
	cout << endl;
	khoangCachHaiSoChan(a,n);
	cout << endl;
	deleteNum(a,n,k);
	cout << endl;
	insertNum(a,n);
	delete[] a;
	return 0;
}
