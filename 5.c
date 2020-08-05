#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%d", a, b);
	_getch();
	return 0;
}