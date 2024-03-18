#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];

	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);

	printf("\n입력된 문자열은\n");
	printf("%s", str);
	printf("입니다.\n\n");

	// 배열의 길이에 개행문자도 포함되기 때문에 -1
	printf("입력된 문자열의 길이 = %d", strlen(str)-1);

	return 0;
}