#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	num = num % 100 / 10;
	printf("%d", num);
	_getch();
	return 0;
}