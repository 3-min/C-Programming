#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// 문자열 안에 특정 문자 개수 찾는 코드
int main(void) {

	char str[100];
	int i, cnt;
	cnt = 0;

	printf("문자열을 입력하십시오...\n");
	scanf("%s", str);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a') {
			cnt++;
		}
	}
	printf("%s에서 a의 개수는 %d개입니다.\n",str, cnt);

	return 0;
}