#include <stdio.h>

int main(void) {
	char a;

	printf("f = ȯŸ, c = �ݶ�, p = ��ī�� �� f,c,p �ϳ��� ���ÿ�\n");
	scanf("%c", &a);

	switch (a)
	{
	case 'f':
		printf("ȯŸ�� ���̽��ϴ�.");
		break;
	case 'c':
		printf("�ݶ� ���̽��ϴ�.");;
		break;
	case 'p':
		printf("��ī���� ���̽��ϴ�.");
		break;
	default:
		printf("�޴��� �����ϴ�.");
		break;
	}

	return 0;
}