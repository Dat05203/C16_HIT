#include<iostream>
#include<string.h>

using namespace std;
void daoNguocTuCoTrongChuoi(char s[]) {
	char ketQua[100];
	int j = 0, dem = 0;
	int n = strlen(s);
	// Lap tu cuoi chuoi 
	for(int i = n; i >= 0; i--) {
		if(s[i] == '\0') {
			continue;
		}
		dem++;
		// Khi gap khoang trang bat dau sao chep
		if(s[i] == ' ') {
			for(int k = i; k < i+dem; k++) {
				ketQua[j] = s[i+1];
				j++;
			}
			ketQua[j-1] = ' ';
			dem = 0;
		}
	    // Lap tu dau chuoi 
	    if(i == 0) {
	    	for(int k = i; k < i+dem; k++) {
	    		ketQua[j] = s[i];
	    		j++;
			}
		}
    }
    ketQua[n-1] = '\0';
    cout << ketQua;
}
int main() {
	char s[100];
	fflush(stdin);
	gets(s);
	daoNguocTuCoTrongChuoi(s);
	return 0;
}
