#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	fgets(str, sizeof(str), stdin);

	printf("\n�Էµ� ���ڿ���\n");
	printf("%s", str);
	printf("�Դϴ�.\n\n");

	// �迭�� ���̿� ���๮�ڵ� ���ԵǱ� ������ -1
	printf("�Էµ� ���ڿ��� ���� = %d", strlen(str)-1);

	return 0;
}