#include <stdio.h>

int main(void) {

	int i, j, num;
	printf("정수를 입력하십시오..\n> ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = i; j < num; j++) {
			printf(" ");
		}
		for (j = 1; j <= i*2-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = num - 1; i > 0; i--) {
		for (j = i; j < num; j++) {
			printf(" ");
		}
		for (j = 1; j < i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}