#include <stdio.h>

int main(void) {
	int kor, eng, mat; //세과목 점수
	double avg; //평균점수
	char grade; //학점

	printf("당신의 국영수 점수를 입력하세요\n");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;

	if (avg >= 90) {
		grade = 'A';
	}
	else if (avg < 90 && avg >= 80) {
		grade = 'B';
	}
	else
	{
		grade = 'C';
	}


	printf("평균 : %.1lf, 학점 : %c", avg, grade);

	return 0;
	
}