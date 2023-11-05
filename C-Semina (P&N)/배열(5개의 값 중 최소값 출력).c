#include <stdio.h>

int main(void){

	int num[5];
	int min = 9999999999999;
	//int min;
	for (int i = 0; i < 5; i++){
		printf("숫자[%d]를 입력하시오 : ",i + 1);
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
		printf("숫자[%d] : %d\n",i + 1, num[i]);
	}
	printf("중에서 가장 작은 수는 %d이다.", min);
	return 0;
}