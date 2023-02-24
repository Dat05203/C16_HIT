#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
void Nhapn(int &n) {
	cout << "n = ";
	cin >> n;
}
void Nhapm(int &m) {
	cout << "m = ";
	cin >> m;
}
double tinhToan(float x, int n) {
	double sum = 2020*abs(n*x);
	for(int i = 1; i <= n; i++) {
		sum += (x/(2*n-i));
	}
	return sum;
}
int main() {
	int n, m;
	float x;
	Nhapn(n);
	Nhapm(m);
	cin >> x;
	if(n > m) {
		cout << fixed << setprecision(3) << tinhToan(x,n) - tinhToan(x,m);
	}
	else {
		cout << fixed << setprecision(3) << tinhToan(x,m) - tinhToan(x,n);
	}
	return 0;
}
