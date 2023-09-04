#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// 문자열의 길이 가시화 코드
int length(char str[]);

int main(void) {

	char str[100];
	int ans;

	printf("문자열을 입력하세요...\n");
	scanf("%s", str);

	ans = length(str);

	printf("문자열의 길이는 %d입니다.\n", ans);

	return 0;
}
int length(char str[]) {
	int i, cnt;
	cnt = 0;

	for (i = 0; str[i] != '\0'; i++) {
		cnt++;
	}
	return cnt;
}