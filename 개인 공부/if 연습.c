#include <stdio.h>

int main(void){

	int flag = 0;
	int num = 0;
	
	scanf_s("%d", &num);
	if (num == 0){
		printf("0�� ��µ��� �ʴ´�.");
		return 0;
	}
	printf("�� ���� ");
	if (num > 100){
		flag += 1;
	}
	if (num < -100){
		flag += -1;
	}

	if (num > 0){
		flag += 1;
	}
	if (num < 0){
		flag += -1;
	}

	if (flag == 2){
		printf("100���� ũ��, ����̰�, ");
	}
	if (flag == 1){
		printf("����̸�, ");
	}
	if (flag == -2){
		printf("-100���� �۰�, �����̰�, ");
	}
	if (flag == -1){
		printf("�����̸�, ");
	}
	if (num % 2 == 0){
		printf("¦���̴�.");
	}
	else{
		printf("Ȧ���̴�.");
	}
	return 0;
}