#include <stdio.h>

int main(void) {

	int i, num;
	printf("����� ����Ͻðڽ��ϱ�?\n> ");
	scanf_s("%d", &num);
	printf("%d���� ����մϴ�..\n", num);
	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}
	return 0;
}