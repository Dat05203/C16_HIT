#include<iostream>
#include<iomanip>

using namespace std;
void Nhap_n(int &n) {
	do {
		cin >> n;
	}while(n <= 0);
}
void Nhap_x(float &x) {
	cin >> x;
}
float Lt(float x, int y) {
	float lt = 1; 
	for(int i = 1; i <= y; i++) {
		lt *= x;
	}
	return lt;
}
float Sum(int n, float x) {
	float sum = 0; int gt = 1;
	for(int i = 1; i <= n; i++) {
        gt *= i;
		float kq = ((Lt((-1),i)*Lt(x,i))/gt); 
		sum += kq;
	}
	return sum;
}
int main() {
	int n;
	float x;
	Nhap_n(n);
	Nhap_x(x);
	cout << fixed << setprecision(4) << Sum(n,x);
	return 0;
}
