#include <stdio.h>

int main(void) {
	int kor, eng, mat; //������ ����
	double avg; //�������
	char grade; //����

	printf("����� ������ ������ �Է��ϼ���\n");
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


	printf("��� : %.1lf, ���� : %c", avg, grade);

	return 0;
	
}