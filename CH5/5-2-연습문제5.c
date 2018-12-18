#include <stdio.h>

int main(void) {
	int age, cm;
	char size;

	printf("나이와 가슴둘레를 입력하시오\n");
	scanf("%d %d", &age, &cm);

	if (age < 20) {
		if (cm >= 95) {
			size = 'L';
		}
		else if (cm < 85) {
			size = 'S';
		}
		else {
			size = 'M';
		}
	}
	else {
		if (cm >= 100) {
			size = 'L';
		}
		else if (cm < 90) {
			size = 'S';
		}
		else {
			size = 'M';
		}
	}

	printf("사이즈는 %c입니다.", size);

	return 0;
}