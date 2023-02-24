#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
void nhap(float *a, int &n) {
	do {
		cin >> a[n];
		if(a[n] == -1){
			break;
		}
		else {
			n++;
		}
	}while(n < 50);
	a = (float *)realloc(a,n*sizeof(float));
}
void xuat(float *a, int n) {
	for(int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
}
void deleteAll(float *&a, int &n, int pos) {
	for(int i = pos; i < n; i++) {
		a[i] = a[i+1]; 
	}
	n--;
	a = (float *)realloc(a,n*sizeof(float));
}
void deleteNumber(float *&a, int &n) {
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] == a[j]) {
				deleteAll(a,n,j);
			}
		}
	}
	xuat(a,n);
}
void tach(float *a, int n) {
	float *b, *c;
	int x=0, y=0;
	b = (float *)malloc(x*sizeof(float));
	c = (float *)malloc(y*sizeof(float));
	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			b[x] = a[i];
			x++;
		}
		if(a[i] < 0) {
			c[y] = a[i];
			y++;
		}
	}
	cout << endl;
	xuat(b,x);
	cout << endl;
	xuat(c,y);
}
int main() {
	int n;
    float *a = (float *)malloc(50*sizeof(float));
	nhap(a,n);
	xuat(a,n);
	cout << endl;
	deleteNumber(a,n);
	tach(a,n);
	delete[] a;
}
