#include <stdio.h>

int main(void) {
	double height, kg;

	prinf("����� Ű�� �����Ը� �Է��ϼ���.\n");

	scanf("%lf %lf", &height, &kg);

	if (height >= 187.5 && kg < 80.0) {
		printf("OK");
	}
	else {
		prinf("cancel");
	}

	return 0;
}