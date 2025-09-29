#include <iostream>
#include <vector>
using namespace std;

int minIndex(const vector<double>& a) {
    int idx = 0;
    for (int i = 1; i < a.size(); i++)
        if (a[i] < a[idx]) idx = i;
    return idx;
}

int maxIndex(const vector<double>& a) {
    int idx = 0;
    for (int i = 1; i < a.size(); i++)
        if (a[i] > a[idx]) idx = i;
    return idx;
}

int countGreater(const vector<double>& a, double x) {
    int cnt = 0;
    for (double v : a)
        if (v > x) cnt++;
    return cnt;
}

double sum(const vector<double>& a) {
    double s = 0;
    for (double v : a) s += v;
    return s;
}


int main() {
    setlocale(0, "");
    int n;
    cout << "Введите количество работников: ";
    cin >> n;

    vector<double> hours(n), rate(n), salary(n), tax(n), net(n);

    for (int i = 0; i < n; i++) {
        cout << "Работник " << i + 1 << " (часы, ставка): ";
        cin >> hours[i] >> rate[i];
        salary[i] = hours[i] * rate[i];
        tax[i] = salary[i] * 0.13;
        net[i] = salary[i] - tax[i];
    }

    int minId = minIndex(salary);
    int maxId = maxIndex(salary);

    cout << "\nРаботник с минимальной зарплатой: "
        << minId + 1 << " (" << salary[minId] << " руб.)" << endl;
    cout << "Работник с максимальной зарплатой: "
        << maxId + 1 << " (" << salary[maxId] << " руб.)" << endl;

    cout << "\nРаботники с зарплатой на руки > 50000: ";
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (net[i] > 50000) {
            cout << (i + 1) << " ";
            cnt++;
        }
    }
    if (cnt == 0) cout << "нет";
    cout << "\nВсего таких работников: " << cnt << endl;

    cout << "\nОбщая сумма налога, уплаченная бригадой: "
        << sum(tax) << endl;

    return 0;
}
