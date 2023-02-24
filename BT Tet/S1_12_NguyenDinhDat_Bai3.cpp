#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
void Nhap_n(int &n) {
	do{
		cin >> n;
	}while(n <= 4);
}
void Nhap_m(int n, int &m) {
	do{
		cin >> m;
	}while(m <= n);
}
void Sum(int n, int m) {
	int sum1 = 0; int sum2 = 0;
	for(int i = 1; i <= n; i++) {
		if(i % 3 == 0) sum1 += i;
	}
	cout << sum1 << endl;
	for(int i = n; i <= m; i++) {
		if(i % 3 == 0) sum2 += i;
	}
	cout << sum2 << endl;
}
float P(int n) {
	float kq = 0;
	for(int i = 1; i <= n; i++) {
		kq = sqrt(i+kq);
	}
	return kq;
}
int main() {
    int n, m;
    Nhap_n(n);
    Nhap_m(n,m);
    Sum(n,m);
    cout << fixed << setprecision(3) << P(n);
    return 0;
}
