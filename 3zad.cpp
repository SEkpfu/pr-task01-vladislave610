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
void input(double& hours, double& rate, double& bonus) {
	setlocale(0, "");
	cout << "Введите количество отработанных часов : "; cin >> hours;
	cout << "Введите ставку почасовой оплаты (руб/час): "; cin >> rate;
	cout << "Введите процент премии: "; cin >> bonus;
}
int main() {
	setlocale(0, "");
	double hours, rate, bonus;
	input(hours, rate, bonus);
	double zp = calculatezp(hours, rate, bonus);
	double nalog = calculatenalog(zp);
	double naruki = calculatenaruki(zp);
	cout << "\nОбщая зарплата: " << zp << "руб." << endl;
	cout << "Подоходный налог (13%): " << nalog << "руб." << endl;
	cout << "Сумма на руки: " << naruki << "руб." << endl;
	return 0;
}
