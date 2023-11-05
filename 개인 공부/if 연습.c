#include <stdio.h>

int main(void){

	int flag = 0;
	int num = 0;
	
	scanf_s("%d", &num);
	if (num == 0){
		printf("0은 출력되지 않는다.");
		return 0;
	}
	printf("이 수는 ");
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
		printf("100보다 크고, 양수이고, ");
	}
	if (flag == 1){
		printf("양수이며, ");
	}
	if (flag == -2){
		printf("-100보다 작고, 음수이고, ");
	}
	if (flag == -1){
		printf("음수이며, ");
	}
	if (num % 2 == 0){
		printf("짝수이다.");
	}
	else{
		printf("홀수이다.");
	}
	return 0;
}