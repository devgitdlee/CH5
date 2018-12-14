#include <stdio.h>

int main(void) {
	int a;
	char size;

	printf("당신 가슴둘레를 입력하시오.\n");
	scanf("%d", &a);
	/*
	if (a <= 90) {
		size = 'S';
	}
	else if (a > 100) {
		size = 'L';
	}else {
		size = 'M';
	}
	*/
	if (a <= 90) {
		size = 'S';
	}
	else if (a > 90 && a < 100) {
		size = 'M';
	}
	else {
		size = 'L';
	}
	printf("당신의 사이즈는: %c", size);

	return 0;
}