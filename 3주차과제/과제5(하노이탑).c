#include <stdio.h>

void hanoi_top(int n, char from, char temp, char to)
{
	if (n == 1)
		printf("%c에서 원반 1를(을) %c로 옮김\n", from, to);
	else
	{
		hanoi_top(n - 1, from, to, temp);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, n, to);
		hanoi_top(n - 1, temp, from, to);
	}
}

int main(void) {
	int top_num = 3;
	hanoi_top(top_num, 'A', 'B', 'C');
	return 0;
}

