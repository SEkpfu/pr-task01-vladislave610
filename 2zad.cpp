#include <iostream>
using namespace std;
double calculatezp(double hours, double rate, double bonus) {
	double zp = hours * rate;
	return zp * (1 + bonus / 100.0);
}
double calculatenalog(double zp, double proc = 13.0) {
	return zp * proc / 100.0;
}
double calculatenaruki(double zp, double proc = 13.0) {
	return zp - calculatenalog(zp, proc);
}
int main() {
	setlocale(0, "");
	double hours, rate, bonus;
	cout << "������� ���������� ������������ �����: "; cin >> hours;
	cout << "������� ������ ��������� ������ (���/���): "; cin >> rate;
	cout << "������� ������� ������: "; cin >> bonus;
	double zp = calculatezp(hours, rate, bonus);
	double nalog = calculatenalog(zp);
	double naruki = calculatenaruki(zp);
	cout << "����� ��������: " << zp << "���." << endl;
	cout << "���������� ����� (13%): " << nalog << "���." << endl;
	cout << "����� �� ����: " << naruki << "���." << endl;
	return 0;
}
