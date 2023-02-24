#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double lt(float x, int n) {
	double sum = 1;
	for(int i = 1; i <= n; i++) {
		sum *= x;
	}
    return sum;
}
double tinhToan(int n, float x) {
	if(n % 2 == 0) {
		return ((log(x)/log(n)) + sqrt(1808*exp(x)));
	}
	else {
		double s = sqrt(2022);
		for(int i = 1; i <= n; i++) {
			s += lt((x+1),i);
		}
		return s;
	}
}
int main() {
	int n;float x;
	do {
		cin >> n;
	}while(n <= 0);
	cin >> x;
	cout << fixed << setprecision(4) << tinhToan(n,x);
	return 0;
}
