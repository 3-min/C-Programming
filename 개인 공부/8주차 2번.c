#include <stdio.h>

int main(void){

	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int cnt1, cnt2, sum, tp;
	cnt1 = 0; cnt2 = 0; tp = 0;
	sum = 0;
	for (int i = 0; i < 10; i++){
		scanf_s("%d", &num[i]);

	}
	for (int i = 0; i < 10; i++){
		sum += num[i];
		if (num[i] % 2 != 0){
			cnt1++;
		}
		
		if (num[i] > 10){
			cnt2++;
		}
		
	}
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 9; j++){
			if (num[j] > num[j + 1]){
				tp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tp;
			}
		}
	}
	printf("�Էµ� �ڷ��� Ȧ���� ���� : %d\n", cnt1);
	printf("�Էµ� �ڷ��� �� : %d\n", sum);
	printf("�Էµ� �ڷ��� ���� 10���� ū ���� ���� : %d\n",cnt2);
	for (int i = 0; i < 10; i++){
		printf("%d , ", num[i]);
	}
	printf("\b\b");
	return 0;
	}
