#include <stdio.h>

// X의 Y제곱을 반환하는 함수 int power(int x, int y)를 작성하여 입력된 값을 계산하는 코드

int power(int x, int y) {
	int i;
	int pow = 1;

	for (i = 1; i <= y; i++) {
		pow = pow * x;
	}
	return pow;
}

int main(void) {
	int num1, num2, ans;

	printf("1번째 정수를 입력하세요...\n");
	scanf_s("%d", &num1);
	printf("2번째 정수를 입력하세요...\n");
	scanf_s("%d", &num2);

	ans = power(num1, num2);

	printf("%d의 %d제곱은 %d입니다.\n", num1, num2, ans);

	return 0;
}