#include <stdio.h>

int main(void) {
	int a = 20, b = 10;

	if (a > 0) {
		if (b >= 0) {
			b = 1;
		}
		else {
			b = -1;
		}

	}

	prinf("a : %d, b : %d", a, b);

	return 0;
}