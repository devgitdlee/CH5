#include <stdio.h>

int main(void) {
	int a, b;


	printf("�ΰ��� ���������� �Է��Ͻÿ�\n");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("��: %d\n", a / b);
	}
	else {
		printf("������: %d\n", a % b);
	}

	return 0;


}