#include <stdio.h>

int main(void) {
	int a, b, s;
	char c;

	printf("a�� b�� ������ �Է��Ͻÿ�\n");
	scanf("%d %d", &a, &b);

	printf("������ ��ȣ�� +-*/�� �Է��Ͻÿ�\n");
	scanf(" %c", &c);

	switch (c)
	{
	case '+':
		s = a + b;
		break;
	case '-':
		s = a - b;
		break;
	case '*':
		s = a * b;
		break;
	case '/':
		s = a / b;
		break;
	}
	printf("���� ���� �Է�(����) : %d %c %d\n", a, c, b);
	printf("%d%c%d=%d", a, c, b, s);
	return 0;
}