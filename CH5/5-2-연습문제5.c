#include <stdio.h>

int main(void) {
	int age, cm;
	char size;

	printf("���̿� �����ѷ��� �Է��Ͻÿ�\n");
	scanf("%d %d", &age, &cm);

	if (age < 20) {
		if (cm >= 95) {
			size = 'L';
		}
		else if (cm < 85) {
			size = 'S';
		}
		else {
			size = 'M';
		}
	}
	else {
		if (cm >= 100) {
			size = 'L';
		}
		else if (cm < 90) {
			size = 'S';
		}
		else {
			size = 'M';
		}
	}

	printf("������� %c�Դϴ�.", size);

	return 0;
}