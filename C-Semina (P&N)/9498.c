#include <stdio.h>

int main(void) {
	
	int num;
	printf("점수 입력 : ");
	scanf_s("%d", &num);

	if (num <= 100 && 0 <= num) {

		if (90 <= num) {
			printf("A\n");
		}
		else if (80 <= num) {
			printf("B\n");
		}
		else if (70 <= num) {
			printf("C\n");
		}
		else if (60 <= num) {
			printf("D\n");
		}
		else {
			printf("F\n");
		}
	}
	else {
		printf("Error");
	}
	return 0;
}