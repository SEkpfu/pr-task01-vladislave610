#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double hours, rate, bonus;
	cout << "������� ���������� ������������ �����: "; cin >> hours;
	cout << "������� ������ ��������� ������ (���/���): "; cin >> rate;
	cout << "������� ������� ������: "; cin >> bonus;
	double zp = hours * rate;
	double premzp = zp * (1 + bonus / 100.0);
	cout << "����� ������������ �����: " << premzp << "���. " << endl;
	return 0;
}