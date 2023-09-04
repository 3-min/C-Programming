#include <stdio.h>

// 키보드로 수를 입력하여 그 수가 소수인지 아닌지를 판단하는 코드
int main(void) {
	
	int num = 0;
	int cnt = 0;
	printf("2이상의 정수를 입력하여 주십시오...\n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		printf("소수입니다.\n");
	}
	else if (cnt != 2) {
		printf("소수가 아닙니다.\n");
	}
	else {
		printf("Error");
	}
	cnt = 0;
	return 0;
}