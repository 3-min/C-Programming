#include <stdio.h>

int main(void) {

	int i, j, ag;
	printf("������ �Է����ֽʽÿ�...\n> ");
	scanf_s("%d", &ag);
	
		for (i = 1; i <= ag; i++) {
			for (j = i; j < ag; j++) {
				printf(" ");
			}
			for (j = 0; j < i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
}