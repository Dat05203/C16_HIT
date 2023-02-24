#include<iostream>

using namespace std;
int main() {
	long n;
	int sum;
	cin >> n;
	while( n != 0 ){
		int du = n%10;
		sum += du;
		n /= 10;
	}
	if(sum % 10 == 9) cout << "YES";
	else cout << "NO";
	return 0;
}
