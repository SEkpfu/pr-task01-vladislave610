#include <iostream>
#include <clocale>
using namespace std;
void inputt(double& hours, double& rate, double& bonus) {
	cout << "Введите количество отработанных часов : "; cin >> hours;
	cout << "Введите ставку почасовой оплаты (руб/час): "; cin >> rate;
	cout << "Введите процент премии: "; cin >> bonus;
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
	cout << "\nОбщая зарплата: " << zp << "руб." << endl;
	cout << "Подоходный налог (13%): " << nalog << "руб." << endl;
	cout << "Сумма на руки: " << naruki << "руб." << endl;
	return 0;
}
