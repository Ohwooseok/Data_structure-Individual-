#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("fact(1) �Լ� ȣ��\n");
		printf("fact(1) �� 1 ��ȯ\n");
		return 1;
	}
	else {
		printf("fact(%d) �Լ� ȣ��!\n", n);
		value = n * fact(n - 1);
		printf("fact(%d) �� %d ��ȯ!\n", n, value);
		return value;
	}
}
int main(void) {
	int n, result;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	result = fact(n);
	printf("%d�� ���丮�� ���� %d�Դϴ�.\n", n, result);
	getchar(); getchar();
	return 0;
}