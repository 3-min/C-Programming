#include <stdio.h>

// 2������ ���� ����(x1, x2)�� a������ ���ϴ� �Լ� add() �Լ��� �����͸� ����ؼ� �����Ͻÿ�..
void add(int *x1, int *x2, int a) {
	*x1 += a;
	*x2 += a;
}

int main(void) {
	
	int x1 = 0;
	int x2 = 0;
	int ad = 0;
	printf("�� ������ ������ �Է��Ͻʽÿ�...\n");
	scanf_s("%d", &x1);
	scanf_s("%d", &x2);

	printf("���� ������ �Է��Ͻʽÿ�...\n");
	scanf_s("%d", &ad);

	add(&x1, &x2, ad);
	
	printf("%d���� ���߱� ������ \n", ad);
	printf("x1�� %d���� �Ǿ����ϴ�. \n", x1);
	printf("x2�� %d���� �Ǿ����ϴ�. \n", x2);

	return 0;
}
