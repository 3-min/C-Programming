#include <stdio.h>

int main(void) {

	int sum1, sum2, cnt1, cnt2;
	sum1 = 0; sum2 = 0;
	cnt1 = 0; cnt2 = 0;
	
	int i = 1;
	while (1) {
		if (i % 3 == 0)
		{
			if (sum1 + i < 100) {
				printf("%d + ", i);
				sum1 += i;
				cnt1++;
			}
			else {
				break;
			}
		}
		i++;
	}
	printf("\b\b= %d(%d°³)\n", sum1, cnt1);
	int j = 1;
	while (1) {
		if (j % 5 == 0) {
			if (sum2 + j < 100) {
				printf("%d + ", j);
				sum2 += j;
				cnt2++;
			}
			else {
				break;
			}
		}
		j++;
	}
	printf("\b\b= %d(%d°³)", sum2, cnt2);
	return 0;
}