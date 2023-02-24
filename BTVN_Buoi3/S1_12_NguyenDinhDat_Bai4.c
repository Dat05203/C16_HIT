#include<stdio.h>
#include<stdlib.h>

int main() {
	int x;
	do {
		printf("So nguyen duong x la: ");
		scanf("%d", &x);
	} while(x <= 0);
	int i;
	int gt = 1;
	for (i = 1; i <= x; ++i) {
		gt *= i;
	}
	printf("%d! = ", x);
	printf("%d", gt);
	return 0;
}
