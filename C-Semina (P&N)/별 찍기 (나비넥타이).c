#include <stdio.h>

int main(void) {

	int i, j, ag;
	printf("������ �Է����ֽʽÿ�...\n> ");
	scanf_s("%d", &ag);
	
	for (i = 1; i <= ag; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = ag * 2 - 1; j >= i*2-1; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < ag; i++) {
		for (j = ag - 1; j >= i; j--) {
			printf("*");
		}
		for (j = 0; j <= i * 2; j++) {
			printf(" ");
		}
		for (j = ag - 1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}