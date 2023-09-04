#include <stdio.h>
#define NUM 5

// 5명의 시험 점수를 입력하고 70점 이상의 학생 수를 세어서 표시하는 코드
int main(void) {

	int test[NUM];
	int num = 0;
	int i, j;

	printf("시험 점수를 입력하세요...\n");
	for (i = 0; i < NUM; i++) {
		scanf_s("%d", &test[i]);

		if (test[i] > 70) {
			num++;
		}
	}
	for (j = 0; j < NUM; j++) {
		printf("%d번째 사람의 점수는 %d점입니다.\n", j + 1, test[j]);
	}
	printf("70점 이상인 학생은 %d명입니다.\n", num);
	
	return 0;
}