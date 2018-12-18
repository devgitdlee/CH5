#include <stdio.h>

int main(void) {
	int age, money = 10000, change;

	printf("당신의 나이를 입력하세요.\n");
	scanf("%d", &age);
	/*
	if (age >= 19) {
		change = money = 1200;
	}
	else {
		if (age >= 7 && age <= 12) {
			change = money - 450;
		}
		else if (age >= 13) {
			change = money - 720;
		}
	}
	*/
	if (age >= 7 && age <= 12) {
		change = money - 450;
	}
	else if (age >= 13 && age <= 18) {
		change = money - 720;
	}
	else if (age >= 19) {
		change = money = 1200;
	}
	else
	{
		change = money;
	}

	printf("결과화면\n");
	printf("잔액 : %d원", change);

	return 0;
}