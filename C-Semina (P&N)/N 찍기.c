#include <stdio.h>

int main(void) {

	int i, N;
	scanf_s("%d", &N);
	if (0 < N && N <= 100000) {
		for (i = 1; i <= N; i++) {
			printf("%d\n", i);
		}
	}
	return 0;
}