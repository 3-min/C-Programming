#include <stdio.h>

// Ű����� 5������ ���� ������ �Է��ؼ� �հ��� ����� ����ϴ� �ڵ�
int main(void)
{
	int sum = 0;
	int num = 0;

	for (int i = 1; i <= 5; i++) {
		printf("���� %d�� ������ �Է��Ͻʽÿ�...\n", i);
		scanf_s
		("%d", &num);
		sum += num;
	}
	printf("5������ �հ� ������ %d���Դϴ�. \n", sum);
	printf("5������ ��� ������ %f���Դϴ�. \n", (double)sum / 5);
	return 0;
}