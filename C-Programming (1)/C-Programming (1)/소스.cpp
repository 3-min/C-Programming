#include <stdio.h>

// 키보드로 5과목의 시험 점수를 입력해서 합계의 평균을 출력하는 코드
int main(void)
{
	int sum = 0;
	int num = 0;

	for (int i = 1; i <= 5; i++) {
		printf("과목 %d의 점수를 입력하십시오...\n", i);
		scanf_s
		("%d", &num);
		sum += num;
	}
	printf("5과목의 합계 점수는 %d점입니다. \n", sum);
	printf("5과목의 평균 점수는 %f점입니다. \n", (double)sum / 5);
	return 0;
}