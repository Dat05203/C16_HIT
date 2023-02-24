#include<iostream>
#include<cmath>
#include<iomanip>

const int MAX = 100;
using namespace std;
int main() {
	int a[MAX];
    int n;
    float x;
    cin >> n;
    cin >> x;
    if (n % 2 == 0) {
        double result = log2(x) + exp(n) + 2021;
        cout << fixed << setprecision(4) << result;
    }
    else {
    	int tu = 1;
		double mau = 1;
		double sum = 2021;
    	for(int i = 1; i <= n; i++) {
    		tu  = ( 2*i-1 );
    		mau *= x;
    		sum += tu/mau;
		}
		cout << fixed << setprecision(4) << sum;
	}
}

