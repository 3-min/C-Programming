#include <stdio.h>

int main(void){

	int num[] = { 3, 7, 1, 9, 10 };
	int cnt1 = 0;
	int cnt2 = 0;
	int sum = 0;
	int max1, max2;
	max1 = 0; max2 = 0;

	for (int i = 0; i < 5; i++){
		if (num[i] % 2 == 0){
			cnt1++;
			sum += num[i];
		}
		if (num[i] % 3 == 0){
			cnt2++;
		}
		if (num[i] > max1){//up
			max1 = num[i];
		}
		if (max1 > num[i]){
			for (int i = 0; i < 4; i++){
				max2 = num[i];
			}
		}
	}
	printf("¦�� ������ �� : %d,(���� ���� : %d)\n",sum,cnt1);
	printf("3�� ����� ���� ���� : %d\n",cnt2);
	printf("���� ū ���� %d�̰� �ι�°�� ū ���� %d�̴�.\n", max1, max2);
	return 0;
}