#include <iostream>
#include <iomanip>
#include <locale>
#include <Windows.h>
using namespace std;

void inputt(string& name1, double& hours1, double& rate1, string& name2, double& hours2, double& rate2) {
	setlocale(LC_ALL, "Russian");
	cout << "Введите фамилию, количество отработанных часов и ставку оплаты для 1 работника: ";
	cin >> name1 >> hours1 >> rate1;
	cout << "Введите фамилию, количество отработанных часов и ставку оплаты для 2 работника: ";
	cin >> name2 >> hours2 >> rate2;
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
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name1, name2;
	double hours1, rate1, hours2, rate2;
	double zp1, nalog1, naruki1, zp2, nalog2, naruki2;

	inputt(name1, hours1, rate1, name2, hours2, rate2);
	calculateall(hours1, rate1, zp1, nalog1, naruki1, hours2, rate2, zp2, nalog2, naruki2);

	if (naruki1 < 1000) {
		cout << name1 << " получил меньше 1000 руб. \n";
	}
	if (naruki2 < 1000) {
		cout << name2 << " получил меньше 1000 руб. \n";
	}
	string result = "";
	if (nalog1 > 50 && name1.length() > 0) {
		result += name1.front();
		result += "-";
		result += name1.back();
	}
	if (nalog2 > 50 && name2.length() > 0) {
		if (!result.empty())
			result += " ";
		result += name2.front();
		result += "-";
		result += name2.back();
	}
	if (!result.empty()) {
		cout << "Работники с налогом > 50 руб.: " << result << endl;
	}
	else {
		cout << "Нет работников с налогом > 50 руб. \n";
	}
	return 0;
}
