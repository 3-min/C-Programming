#include <stdio.h>

// Ű����� ���� �Է��Ͽ� �� ���� �Ҽ����� �ƴ����� �Ǵ��ϴ� �ڵ�
int main(void) {
	
	int num = 0;
	int cnt = 0;
	printf("2�̻��� ������ �Է��Ͽ� �ֽʽÿ�...\n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		printf("�Ҽ��Դϴ�.\n");
	}
	else if (cnt != 2) {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	else {
		printf("Error");
	}
	cnt = 0;
	return 0;
}