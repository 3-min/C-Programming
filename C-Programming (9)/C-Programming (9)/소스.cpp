#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// ���ڿ��� ���� ����ȭ �ڵ�
int length(char str[]);

int main(void) {

	char str[100];
	int ans;

	printf("���ڿ��� �Է��ϼ���...\n");
	scanf("%s", str);

	ans = length(str);

	printf("���ڿ��� ���̴� %d�Դϴ�.\n", ans);

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