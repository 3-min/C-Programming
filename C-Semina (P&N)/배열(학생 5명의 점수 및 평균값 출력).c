#include <stdio.h>

int main(){
	int num[5];
	int sum = 0;
	double avg;
	for (int i = 0; i < 5; i++){
		printf("�л�[%d]�� ���� : ", i + 1);
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	avg = (double)sum / 5;
	printf("---------------------------\n");
	for (int i = 0; i < 5; i++){
		printf("�л�[%d]�� ������ %d��\n", i + 1, num[i]);
	}
	printf("�л� 5���� ����� %.2lf�̴�.", avg);
	return 0;
}

