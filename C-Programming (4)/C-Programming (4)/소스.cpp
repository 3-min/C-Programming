#include <stdio.h>

// 2과목의 시험 점수(x1, x2)에 a점씩을 더하는 함수 add() 함수를 포인터를 사용해서 정의하시오..
void add(int *x1, int *x2, int a) {
	*x1 += a;
	*x2 += a;
}

int main(void) {
	
	int x1 = 0;
	int x2 = 0;
	int ad = 0;
	printf("두 과목의 점수를 입력하십시오...\n");
	scanf_s("%d", &x1);
	scanf_s("%d", &x2);

	printf("더할 점수를 입력하십시오...\n");
	scanf_s("%d", &ad);

	add(&x1, &x2, ad);
	
	printf("%d점을 더했기 때문에 \n", ad);
	printf("x1은 %d점이 되었습니다. \n", x1);
	printf("x2은 %d점이 되었습니다. \n", x2);

	return 0;
}
