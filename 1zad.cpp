#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double hours, rate, bonus;
	cout << "¬ведите количество отработанных часов: "; cin >> hours;
	cout << "¬ведите ставку почасовой оплаты (руб/час): "; cin >> rate;
	cout << "¬ведите процент премии: "; cin >> bonus;
	double zp = hours * rate;
	double premzp = zp * (1 + bonus / 100.0);
	cout << "ќбща€ заработанна€ сумма: " << premzp << "руб. " << endl;
	return 0;
}