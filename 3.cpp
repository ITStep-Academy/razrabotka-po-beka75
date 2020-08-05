#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	long d, h, m, s;
	cin >> s;
	d = s / 86400;
	s -= d * 86400;
	h = s / 3200;
	s -= h * 3200;
	m = s / 60;
	s -= m * 60;
	cout << "Days: " << d << "\nHours: " << h << "\nMinutes: " << m << "\nSeconds: " << s << endl;
	_getch();
	return 0;
}