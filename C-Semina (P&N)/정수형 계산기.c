#include <stdio.h>

int main(void) {

	int num1 = 0;
	int	num2 = 0;
	
	printf("�� ������ �Է����ֽʽÿ�.\n");
	scanf_s("%d%d", &num1,&num2);
	printf("���ϱ� ���� : %d\n", num1 + num2);
	printf("���� ���� : %d\n", num1 - num2);
	printf("���ϱ� ���� : %d\n", num1 * num2);
	printf("������ ���� : %d\n", num1 / num2);
	printf("������ ���� : %d\n", num1 % num2);
}