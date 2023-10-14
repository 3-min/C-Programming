#include <stdio.h>

int main(void) {

	int i, num;
	printf("몇단을 출력하시겠습니까?\n> ");
	scanf_s("%d", &num);
	printf("%d단을 출력합니다..\n", num);
	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}
	return 0;
}