#include <stdio.h>

int main(void) {
	int a, b;

	prinf("a를 입력하시오\n");
	scanf("%d", &a);

	switch (a)
	{
		case 3:
			b = 1;
			break;
		case 5:
			b = 2;
			break;
		case 7:
			b = 3;
			break;
		default:
			b = 0;
			break;
	}

	printf("a : %d, b : %d", a, b);

	return 0;

}