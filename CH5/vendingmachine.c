#include <stdio.h>

int main(void) {
	char a;

	printf("f = 환타, c = 콜라, p = 포카리 중 f,c,p 하나를 고르시오\n");
	scanf("%c", &a);

	switch (a)
	{
	case 'f':
		printf("환타를 고르셨습니다.");
		break;
	case 'c':
		printf("콜라를 고르셨습니다.");;
		break;
	case 'p':
		printf("포카리를 고르셨습니다.");
		break;
	default:
		printf("메뉴에 없습니다.");
		break;
	}

	return 0;
}