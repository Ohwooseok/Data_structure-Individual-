#include <stdio.h>
#include <string.h>

// ���� 1
void func1() {
	char *ptr1[4] = { "Korea","Seoul","Mapo","152����2/3" };
	char *ptr2[4] = { "Korea", "Seoul", "Jongno", "152����2/3" };

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr1[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr2[i]);
	}

}

// ���� 2
void func2() {
	char str[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	fgets(str, sizeof(str), stdin);

	printf("\n�Էµ� ���ڿ���\n");
	printf("%s", str);
	printf("�Դϴ�.\n\n");

	printf("�Էµ� ���ڿ��� ���� = %d", strlen(str));


}

int main(void)
{
	func1();
	printf("\n");
	func2();

	return 0;
}