#include <stdio.h>

int main(void) {
	int rich, tuition, scholarship;
	double grade;

	printf("이번학기 등록금 얼마인가요?\n");
	scanf("%d", &tuition);

	printf("가정형편 점수를 입력하시오 (100이상이면 좋은 것으로 판단)\n");
	scanf("%d", &rich);

	printf("이전학기 학점을 입력하시오\n");
	scanf("%lf", &grade);

	if (rich >= 100) {
		if (grade >= 4.0) {
			tuition = tuition * (1 - 0.2);
		}
	}
	else {
		tuition = tuition * (1 - 0.4);
	}

	printf("다음 학기 납입할 등록금은 %d만원입니다.", tuition);

}