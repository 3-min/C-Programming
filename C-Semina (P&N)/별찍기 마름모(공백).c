#include <stdio.h>

int main(void) {
	// input 7
	int i, j, ag;
	printf("Ȧ���� �Է��Ͻʽÿ�...\n>");
	scanf_s("%d", &ag);
	if (ag % 2 == 0) {
		while (1) {
			printf("Ȧ���� �Է��Ͻʽÿ�...\n>");
			scanf_s("%d", &ag);
			if (ag % 2 != 0) {
				break;
			}
		}
	}
	if (ag % 2 != 0) {
		//�� �ﰢ��
		for (i = 0; i < (ag+1)/2; i++) {
			for (j = i + 1; j < (ag+1)/2; j++) {
				printf(" ");
			}
			printf("*");
			if (i >= 1 && i < (ag+1)/2 - 1) {
				for (int j = 1; j <= i * 2 - 1; j++) {
					printf(" ");
				}
				printf("*");
			}
			if (i >= (ag + 1) / 2 - 1) {
				for (j = 1; j < ag; j++) {
					printf("*");
				}
			}
			printf("\n");
			}
		}
		//�Ʒ� �ﰢ��
		for (i = 0; i < (ag + 1) / 2 - 1; i++) {
			for (j = 0; j <= i; j++) {
				printf(" ");
			}
			if (i == (ag+1)/2-2) {
				printf("*");
			}
			else {
				printf("*");
				for (j = (ag + 1) / 2 - 1; j >= (i + 1) * 2 - 1; j--) {
					printf(" ");
				}
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}