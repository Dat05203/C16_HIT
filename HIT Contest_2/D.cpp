//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//void nhapMang(int *a[][3], int m) {
//	for(int i = 0; i < m; i++) {
//		for(int j = 0; j < 3; j++) {
//			cin >> a[i][j];
//		}
//	}
//}
//void xuatMang(int *a[][3], int m) {
//for(int i = 0; i < m; i++) {
//		for(int j = 0; j < 3; j++) {
//			cin >> a[i][j];
//		}
//	}
//}
int main() {
	int m;
	cin >> m;
	int *a = new int[m*3];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < 3; j++) {
			a[i*m+j] = 0;
		}
	}
//	nhapMang(a,m);
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	//xuatMang(a,m);
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	delete[] a;
	return 0;
}
