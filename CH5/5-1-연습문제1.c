#include <stdio.h>

int main(void) {
	int a = 1;

	if (a < 0) {
		a = -a;
	}

	prinf("1�� a ���� %d", a);
	a = 4;
	if (a % 2 == 0) {
		a = 2;
	}
	else {
		a = 1;
	}

	prinf("2�� a ���� %d", a);
		
	return 0;
}