#include <stdio.h>

int main(void) {
	int a, b, s;
	char c;

	printf("a와 b를 정수로 입력하시오\n");
	scanf("%d %d", &a, &b);

	printf("연산한 기호를 +-*/을 입력하시오\n");
	scanf(" %c", &c);

	switch (c)
	{
	case '+':
		s = a + b;
		break;
	case '-':
		s = a - b;
		break;
	case '*':
		s = a * b;
		break;
	case '/':
		s = a / b;
		break;
	}
	printf("사직 연산 입력(정수) : %d %c %d\n", a, c, b);
	printf("%d%c%d=%d", a, c, b, s);
	return 0;
}