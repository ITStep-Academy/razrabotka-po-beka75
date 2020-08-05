#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d%d", a, b);
	_getch();
	return 0;
}