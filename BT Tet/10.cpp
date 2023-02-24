#include<iostream>
#include<cmath>

using namespace std;
void nhapMang(float a[], int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
//float Dem(float a[], int n) {
//	int count = 0;
//	for(int i = n-1; i >= 0; i++) {
//		if(a[i] % 2 == 0) {
//		   count++;
//		}
//	}
//	return count;
//}
void Sum(float a[], int n, int x){
	float sum = 0, dem = 0;
	for(int i=n-1; i >= 0; i--) {
		int tmp = a[i] % 2.00;
		if(tmp == 0) {
			sum += a[i];
			dem++;
		}
		if(dem == x) break;
	}
	cout << sum;
}
int main() {
	float a[100];
	int n, x;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap x = ";
	cin >> x;
	nhapMang(a,n);
	Sum(a,n,x);
	return 0;
}
