#include <stdio.h>

int main(void) {
	int a, b;


	printf("두개의 양의정수를 입력하시요\n");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("몫: %d\n", a / b);
	}
	else {
		printf("나머지: %d\n", a % b);
	}

	return 0;


}