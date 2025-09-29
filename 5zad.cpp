#include <iostream>
#include <iomanip>
using namespace std;

void inputt(double& hours1, double& rate1, double& hours2, double& rate2) {
	cout << "¬ведите количество отработанных часов и ставку оплаты дл€ 1 работника: ";
	cin >> hours1 >> rate1;
	cout << "¬ведите количество отработанных часов и ставку оплаты дл€ 2 работника: ";
	cin >> hours2 >> rate2;
}

void calculateall(double hours1, double rate1, double& zp1, double& nalog1, double& naruki1,
	double hours2, double rate2, double& zp2, double& nalog2, double& naruki2) {
	zp1 = hours1 * rate1;
	nalog1 = zp1 * 0.13;
	naruki1 = zp1 - nalog1;

	zp2 = hours2 * rate2;
	nalog2 = zp2 * 0.13;
	naruki2 = zp2 - nalog2;
}

int main() {
	setlocale(0, "");

	double hours1, rate1, hours2, rate2;
	double zp1, nalog1, naruki1, zp2, nalog2, naruki2;

	inputt(hours1, rate1, hours2, rate2);
	calculateall(hours1, rate1, zp1, nalog1, naruki1, hours2, rate2, zp2, nalog2, naruki2);

	cout << fixed << setprecision(2);

	if (naruki1 > naruki2) {
		cout << "–аботник 1 заработал больше.\n";
	}
	else if (naruki1 < naruki2) {
		cout << "–аботник 2 заработал больше.\n";
	}
	else {
		cout << "–аботники заработали одинаково.\n";
	}

	cout << "—умма, заработанна€ обоими работниками: " << (naruki1 + naruki2) << " руб.\n";

	return 0;
}
