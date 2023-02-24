#include<iostream>
#include<cmath>

using namespace std;
bool Kiem_tra_snt(int n) {
	if(n < 2) return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) return false;
		}
	}
	return true;
}
int Dem(int n) {
	int count = 0;
    while(n > 0) {
    	long d = n % 10;
    	if(Kiem_tra_snt(d) == true) {
    		count++;
		}
		n /= 10;
	}
	return count;
}
void Xuat(int n) {
	while(n > 0) {
    	long d = n % 10;
    	if(Kiem_tra_snt(d) == true) {
    		cout << d << " ";
		}
		n /= 10;
	}
}
int main() {
	int n;
	do {
	   cin >> n; 
    } while(n <= 0);
	cout << Dem(n) << endl;
    Xuat(n);
	return 0;
}
