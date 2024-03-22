#include <stdio.h>

void hanoi_top(int n, char from, char temp, char to)
{
	if (n == 1)
		printf("%c���� ���� 1��(��) %c�� �ű�\n", from, to);
	else
	{
		hanoi_top(n - 1, from, to, temp);
		printf("%c���� ���� %d��(��) %c�� �ű�\n", from, n, to);
		hanoi_top(n - 1, temp, from, to);
	}
}

int main(void) {
	int top_num = 3;
	hanoi_top(top_num, 'A', 'B', 'C');
	return 0;
}

