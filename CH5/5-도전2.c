#include <stdio.h>

int main(void) {
	int rich, tuition, scholarship;
	double grade;

	printf("�̹��б� ��ϱ� ���ΰ���?\n");
	scanf("%d", &tuition);

	printf("�������� ������ �Է��Ͻÿ� (100�̻��̸� ���� ������ �Ǵ�)\n");
	scanf("%d", &rich);

	printf("�����б� ������ �Է��Ͻÿ�\n");
	scanf("%lf", &grade);

	if (rich >= 100) {
		if (grade >= 4.0) {
			tuition = tuition * (1 - 0.2);
		}
	}
	else {
		tuition = tuition * (1 - 0.4);
	}

	printf("���� �б� ������ ��ϱ��� %d�����Դϴ�.", tuition);

}