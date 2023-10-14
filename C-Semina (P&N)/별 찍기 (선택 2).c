#include <stdio.h>

int main(void) {

	int i, j, N;
	scanf_s("%d", &N);
	if (1 <= N && N <= 100) {
		for (i = 1; i <= N; i++) {
			for (j = i; j < N; j++) {
				printf(" ");
			}
			for (j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}