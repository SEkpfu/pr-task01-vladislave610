#include <iostream>
#include <clocale>
using namespace std;
void inputt(double& hours, double& rate, double& bonus) {
	cout << "������� ���������� ������������ ����� : "; cin >> hours;
	cout << "������� ������ ��������� ������ (���/���): "; cin >> rate;
	cout << "������� ������� ������: "; cin >> bonus;
}
void calculateall(double hours, double rate, double bonus, double& zp, double& nalog, double& naruki) {
	zp = hours * rate * (1 + bonus / 100.0);
	nalog = zp * 0.13;
	naruki = zp - nalog;
}
int main() {
	setlocale(0, "");
	double hours, rate, bonus;
	double zp, nalog, naruki;
	inputt(hours, rate, bonus);
	calculateall(hours, rate, bonus, zp, nalog, naruki);
	cout << "\n����� ��������: " << zp << "���." << endl;
	cout << "���������� ����� (13%): " << nalog << "���." << endl;
	cout << "����� �� ����: " << naruki << "���." << endl;
	return 0;
}
