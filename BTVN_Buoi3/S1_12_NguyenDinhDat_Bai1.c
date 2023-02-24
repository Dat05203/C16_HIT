#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	printf("for loop: ");
	for(i = 100; i>= 1; i--) {
		printf("%d ", i);
	}
	
	printf("\n\nwhile loop: ");
	i = 100;
	while(i >= 1) {
		printf("%d ",i);
		i--;
	}
	
	printf("\n\ndo-while loop: ");
	i = 100;
	do {
		printf("%d ",i);
		i = i - 1;	
	} while( i >= 1);
	
	return 0;
}
