#include<iostream>
#include<cmath>

const int MAX = 100;
using namespace std;
// Nhap
void Nhap_mang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "\nNhap a[" << i << "]: ";
		cin >> a[i];
	}
}
// Xuat
void Xuat_mang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
// Ham kiem tra so nguyen to 
bool Kiem_tra_snt(int n) {
	if (n <= 1) return false;
	else {
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
	}
	return true;
}
// Ham kiem tra so may man
bool Kiem_tra_so_may_man(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	if (Kiem_tra_snt(sum) == true) {
        return true;
	}
}
int main() {
	int a[MAX];
	int n;
	do {
	   cout << "\nNhap so n = ";
	   cin >> n;
    } while (n <= 2 || n > 50);
	cout << "\n\t\tMANG BAN DAU";
	Nhap_mang(a,n);
	Xuat_mang(a,n);
	cout << "\n\t\tMANG SAU KHI KIEM TRA\n";
	for(int i = 0; i < n; i++)
		if (Kiem_tra_so_may_man(a[i]) == true )
		    a[i] = -1;
	Xuat_mang(a,n);
	return 0;
}
