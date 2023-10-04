#include <stdio.h>

int main(void) {

	int num1, num2;
	scanf_s("%d%d", &num1, &num2);

	if (num1 < num2) {
		printf("<\n");
	}
	else if (num1 == num2) {
		printf("==\n");
	}
	else if (num1 > num2) {
		printf(">\n");
	}
	else {
		printf("error\n");
	}
	return 0;
}