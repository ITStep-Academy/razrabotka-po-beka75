#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	long h, m, s;
	cin >> s;
	h = s / 3200;
	s -= h * 3200;
	m = s / 60;
	s -= m * 60;
	cout << "\nHours: " << h << "\nMinutes: " << m << "\nSeconds: " << s << endl;
	_getch();
	return 0;
}