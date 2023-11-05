#include <stdio.h>

int main(){
	int num[5];
	int sum = 0;
	double avg;
	for (int i = 0; i < 5; i++){
		printf("학생[%d]의 점수 : ", i + 1);
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	avg = (double)sum / 5;
	printf("---------------------------\n");
	for (int i = 0; i < 5; i++){
		printf("학생[%d]의 점수는 %d점\n", i + 1, num[i]);
	}
	printf("학생 5명의 평균은 %.2lf이다.", avg);
	return 0;
}

