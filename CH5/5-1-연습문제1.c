#include <stdio.h>

int main(void) {
	int a = 1;

	if (a < 0) {
		a = -a;
	}

	prinf("1번 a 값은 %d", a);
	a = 4;
	if (a % 2 == 0) {
		a = 2;
	}
	else {
		a = 1;
	}

	prinf("2번 a 값은 %d", a);
		
	return 0;
}