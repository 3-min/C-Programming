#include <stdio.h>
// IF 조건문을 이용한 T/F 구분, a,b,c인 경우 T 그 외는 F 출력 코드
int main(void) {
	
	char ans;
	printf("문자를 입력하여 주십시오...\n");
	ans = getchar();

	if (ans == 'A' || ans == 'B' || ans == 'C' || ans == 'a' || ans == 'b' || ans == 'c') {
		printf("True \n");
	}
	else {
		printf("False");
	}
	return 0;
}