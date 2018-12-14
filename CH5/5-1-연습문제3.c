#include <stdio.h>

int main(void) {
	double height, kg;

	prinf("당신의 키와 몸무게를 입력하세요.\n");

	scanf("%lf %lf", &height, &kg);

	if (height >= 187.5 && kg < 80.0) {
		printf("OK");
	}
	else {
		prinf("cancel");
	}

	return 0;
}