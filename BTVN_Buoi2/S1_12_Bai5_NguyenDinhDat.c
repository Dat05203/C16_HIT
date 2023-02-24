#include<stdio.h>
#include<stdlib.h>

int main() {
	int N, M;
	printf("M = ");
	scanf("%d",&M);
	printf("N = ");
	scanf("%d",&N);
	switch (M) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 ngay");
			break;
		case 2:
			if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0)) {
				printf("29 ngay");
			}
			else {
				printf("28 ngay");
			}
	}
	return 0;
}
