#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double Th1(float x, int n) {
	double l = 2021;
	double tu = 0;
	long int mau = 1;
	for(int i = 1; i <= n; i++) {
		tu = pow(x,i) + 2*i;
		mau *= i;
		l += tu/mau;
	}
	return l;
}
double Th2(float x, int n) {
	double l = 2022;
	double tu = 0;
	long int mau = 0;
	for(int i = 1; i <= n; i++) {
		tu = pow(x,i) + 2*i;
		mau += i; 
        l += tu/mau;
	}
	return l;
}
int main() {
	float x; 
	int n;
	cin >> x;
	do {
		cin >> n;
	}while(n < 0);
	if(n % 2 != 0) {
        cout << fixed << setprecision(4) << Th2(x,n);
    }
    else {
    	cout << fixed << setprecision(4) << Th1(x,n);
	}
	return 0;
}

