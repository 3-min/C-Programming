#include <stdio.h>

int main(void){

	int num[5] = { 2, 4, 1, 5, 3 };
	int tp;

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			if (num[j] < num[j + 1]){
				tp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tp;
			}
		}
	}
	for (int i = 0; i < 5; i++){
		printf("%d, ", num[i]);   
	}
	printf("\b\b");
}