#include <stdio.h>

int main(void) {
	int array[2][3][4] = { { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } },{ { 13,14,15,16 },{ 17,18,19,20 },{ 21,22,23,24 } } };

	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 3; b++) {
			for (int c = 0; c < 4; c++) {
				printf("array[%d][%d][%d] = %d\n", a, b, c, array[a][b][c]);
			}
		}
	}

	return 0;
}