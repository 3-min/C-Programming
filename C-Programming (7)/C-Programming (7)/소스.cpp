#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// ���ڿ� �ȿ� Ư�� ���� ���� ã�� �ڵ�
int main(void) {

	char str[100];
	int i, cnt;
	cnt = 0;

	printf("���ڿ��� �Է��Ͻʽÿ�...\n");
	scanf("%s", str);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a') {
			cnt++;
		}
	}
	printf("%s���� a�� ������ %d���Դϴ�.\n",str, cnt);

	return 0;
}