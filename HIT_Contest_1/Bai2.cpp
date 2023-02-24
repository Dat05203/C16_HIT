#include<iostream>

using namespace std;
int main() {
	int k = 0;
	long a, b, c, max;
	cin >> a >> b >> c;
	if(a + b - c == 0 || a + c - b == 0 || b + c - a == 0) {
		k = 1;
	}
	else {
		k = 0;
	}
	cin >> a >> b >> c;
	if(a + b - c == 0 || a + c - b == 0 || b + c - a == 0) {
		k = 2;
	}
	else {
		k = 0;
	}
	if(k == 1) cout << "yes";
	cout << endl;
	if (k == 2) cout << "yes";
	cout << endl;
	if(k == 0) cout << "no" << endl;
	return 0;
}
