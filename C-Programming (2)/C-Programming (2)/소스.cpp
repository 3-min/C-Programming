#include <stdio.h>
// IF ���ǹ��� �̿��� T/F ����, a,b,c�� ��� T �� �ܴ� F ��� �ڵ�
int main(void) {
	
	char ans;
	printf("���ڸ� �Է��Ͽ� �ֽʽÿ�...\n");
	ans = getchar();

	if (ans == 'A' || ans == 'B' || ans == 'C' || ans == 'a' || ans == 'b' || ans == 'c') {
		printf("True \n");
	}
	else {
		printf("False");
	}
	return 0;
}