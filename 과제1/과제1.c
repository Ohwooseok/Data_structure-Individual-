#include <stdio.h>

int main(void) {
	char *ptr1[4] = { "korea","seoul","mapo","152¹øÁö2/3" };

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr1[i]);
	}
	printf("\n\n");

	ptr1[2] = "Jongno";

	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr1[i]);
	}

	return 0;
}



