#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int a, b, c, d;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	a += 1;
	b *= (25 + a);
	c -= 1;
	b -= 3 * d;
	printf("%d\n%d\n%d\n%d", a, b, c, d);
	_getch();
	return 0;
}
