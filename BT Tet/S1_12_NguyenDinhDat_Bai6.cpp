#include<iostream>
#include<string.h>

using namespace std;
void kiemTra(char s[], char x) {
	int k = 0;
	int n = strlen(s);   // Do dai chuoi ban dau
	for(int i = 1; i <= n+1; i++) {
		if(s[i] == x) {
		   cout << i << " ";
		   k++;
		}
	}
	if(k == 0) cout << "NO";
}
int main() {
	char s[100];
	char x;
	fflush(stdin);
	gets(s);
	cin >> x;
	kiemTra(s,x);
	return 0;
}
