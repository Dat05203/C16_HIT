#include<iostream>

const int MAX = 100;
using namespace std;
void Nhap_mang(int a[], int n) {
	for(int i = 0; i < n ; i++) {
		cin >> a[i];
	}
}
void Xuat_mang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void Doi_vi_tri(int a[], int n) { 
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (i != j)
                swap(a[i], a[j]);
            j++;
        }
    }
}
void Sort(int a[], int n) {
	Doi_vi_tri(a,n);
	for(int i = 0; i < n; i++) {
	    if(a[i] > 0) {
        	for(int j = i+1; j < n; j++) {
        		if(a[j] > 0 && a[i] > a[j]) {
        			int temp = a[i];
				    a[i] = a[j];
				    a[j] = temp;
				}
			}
		}
	    else {
			for(int j=i+1; j < n; j++) {
        		if(a[j] < 0 && a[i] < a[j]) {
        			int temp = a[i];
				    a[i] = a[j];
				    a[j] = temp;
				}
			}
	    }
	}
}
int main() {
	int a[MAX];
	int n;
	do {
	   cin >> n;
	} while(n < 3 || n > 50);
	Nhap_mang(a,n);
	Sort(a,n);
	Xuat_mang(a,n);
}
