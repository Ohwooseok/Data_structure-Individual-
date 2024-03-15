#include <stdio.h>
#include <string.h>

// 과제 1
void func1() {
	char *ptr1[4] = { "Korea","Seoul","Mapo","152번지2/3" };
	char *ptr2[4] = { "Korea", "Seoul", "Jongno", "152번지2/3" };

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr1[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr2[i]);
	}

}

// 과제 2
void func2() {
	char str[100];

	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);

	printf("\n입력된 문자열은\n");
	printf("%s", str);
	printf("입니다.\n\n");

	printf("입력된 문자열의 길이 = %d", strlen(str));


}

int main(void)
{
	func1();
	printf("\n");
	func2();

	return 0;
}