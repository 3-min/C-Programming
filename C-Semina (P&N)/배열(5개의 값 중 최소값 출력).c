#include <stdio.h>

int main(void){

	int num[5];
	int min = 9999999999999;
	//int min;
	for (int i = 0; i < 5; i++){
		printf("����[%d]�� �Է��Ͻÿ� : ",i + 1);
		scanf_s("%d", &num[i]);
		if (min > num[i]){
			min = num[i];
		}
	}
	/*min = num[0];
	for (int i = 0; i < 5; i++){
		if (min > num[i]){
			min = num[i];
		}
	}*/
	printf("-----------------------------\n");
	for (int i = 0; i < 5; i++){
		printf("����[%d] : %d\n",i + 1, num[i]);
	}
	printf("�߿��� ���� ���� ���� %d�̴�.", min);
	return 0;
}