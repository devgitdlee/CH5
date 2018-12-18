#include <stdio.h>

int main(void) {
	int a = 10, b = 2, res;

	if (a >= 10) {
		res = a;
	}
	else {
		if (b != 0) {
			res = a / b;
		}
	}

	printf("res : %d", res);

	return 0;
	
}