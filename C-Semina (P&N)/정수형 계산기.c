#include <stdio.h>

int main(void) {

	int num1 = 0;
	int	num2 = 0;
	
	printf("두 정수를 입력해주십시오.\n");
	scanf_s("%d%d", &num1,&num2);
	printf("더하기 값은 : %d\n", num1 + num2);
	printf("빼기 값은 : %d\n", num1 - num2);
	printf("곱하기 값은 : %d\n", num1 * num2);
	printf("나누기 값은 : %d\n", num1 / num2);
	printf("나머지 값은 : %d\n", num1 % num2);
}