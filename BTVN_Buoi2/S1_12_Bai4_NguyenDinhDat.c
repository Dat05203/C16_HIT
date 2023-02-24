#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, m, k;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	if ((n>=1 && n<=20) && (m>=1 && m<=5) && (k>=10 && k<=50)) {
		if ( (m*k) % n == 0 ) {
			printf("NO");
		}
		else {
			printf("YES");
		}
	}
	
}
