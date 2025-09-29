#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cin >> n;
    vector<double> hours(n), rate(n), salary(n), tax(n), net(n);

    for (int i = 0; i < n; i++) {
        cin >> hours[i] >> rate[i];
        salary[i] = hours[i] * rate[i];
        tax[i] = salary[i] * 0.13;
        net[i] = salary[i] - tax[i];
    }

    int minId = 0, maxId = 0;
    for (int i = 1; i < n; i++) {
        if (salary[i] < salary[minId]) minId = i;
        if (salary[i] > salary[maxId]) maxId = i;
    }

    cout << "���: �������� " << minId + 1 << endl;
    cout << "����: �������� " << maxId + 1 << " " << salary[maxId] << "���." << endl;

    int cnt = 0;
    for (int i = 0; i < n; i++) if (net[i] > 50000) cnt++;
    cout << "���������� > 50000 �� ����: " << cnt << endl;

    double totalTax = 0;
    for (double t : tax) totalTax += t;
    cout << "����� �����: " << totalTax << endl;
    return 0;
}
