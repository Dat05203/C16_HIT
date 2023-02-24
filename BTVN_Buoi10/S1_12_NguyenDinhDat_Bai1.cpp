#include<bits/stdc++.h>

using namespace std;
void Nhap_n(int &n) {
	do{
		cin >> n;
	}while(n < 1 || n > 50);
}
void nhapMang(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int *a, int &n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void Search(int *a, int n) {
	int cnt = 0, sum = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] < 0 && abs(a[i]) < 8) {
			cout << a[i] << " ";
			sum += a[i];
			cnt++;
		}
	}
	if(cnt > 0) {
	    cout << (float)sum/cnt << endl; 
	}
	else  {
	    cout << "0" << endl;
	}
}
void soLonThuHai(int *a, int n) {
	int max =a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	} 
	int min = a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	int max2=min;
	for(int i=0;i<n;i++){
		if(max2<a[i] && a[i]<max){
			max2 = a[i];
		}
	}
	cout<<max2<<endl;
}
void Add(int *&a, int &n, int x, int pos) {
	n++;
	a = (int *)realloc(a,n*sizeof(int));
	for(int i = n; i >= pos; i--) {
		a[i] = a[i-1];
	}
	*(a+pos) = x;
}
void insertNumber(int *a, int &n, int x){
	for(int i = 0; i < n; i++) {
		if(a[i] < x) {
			Add(a,n,x,i+1);
			i++;
		}
	}
}
int main() {
	int n, x;
	Nhap_n(n);
	int *a = new int[n];
	nhapMang(a,n);
    cin >> x;
	cout << endl;
	xuatMang(a,n);
	cout << endl;
	Search(a,n);
	soLonThuHai(a,n);
    insertNumber(a,n,x);
    xuatMang(a,n);
	delete[] a;
	return 0;
}
