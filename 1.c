#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	float num;
	scanf_s("%f", &num);
	int a = (int)num;
	printf("%f", num);
	printf("\n%d", a);
	_getch();
	return 0;
}