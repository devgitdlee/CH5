#include <stdio.h>

int main(void) {
	int a;
	char size;

	printf("��� �����ѷ��� �Է��Ͻÿ�.\n");
	scanf("%d", &a);
	/*
	if (a <= 90) {
		size = 'S';
	}
	else if (a > 100) {
		size = 'L';
	}else {
		size = 'M';
	}
	*/
	if (a <= 90) {
		size = 'S';
	}
	else if (a > 90 && a < 100) {
		size = 'M';
	}
	else {
		size = 'L';
	}
	printf("����� �������: %c", size);

	return 0;
}