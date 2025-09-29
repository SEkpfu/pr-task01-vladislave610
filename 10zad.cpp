#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    const int workers = 4, months = 3;
    double hours[workers][months], rate[workers];
    double salary[workers][months], tax[workers][months], net[workers][months];

    for (int i = 0; i < workers; i++) {
        cin >> rate[i];
        for (int j = 0; j < months; j++) {
            cin >> hours[i][j];
            salary[i][j] = hours[i][j] * rate[i];
            tax[i][j] = salary[i][j] * 0.13;
            net[i][j] = salary[i][j] - tax[i][j];
        }
    }

    cout << "1) ����� �� ���� 1-�� ��������� �� 2-� ������: " << net[0][1] << endl;

    double totalTax = 0;
    for (int j = 0; j < months; j++) totalTax += tax[2][j];
    cout << "2) ����� ����� 3-�� ���������: " << totalTax << endl;

    int maxId = 0;
    for (int i = 1; i < workers; i++) if (salary[i][2] > salary[maxId][2]) maxId = i;
    cout << "3) ��������, ������������ ������ ���� � 3-� ������: " << maxId + 1 << endl;

    double total = 0;
    for (int i = 0; i < workers; i++)
        for (int j = 0; j < months; j++)
            total += salary[i][j];
    cout << "4) ����� ����� ������� �� ���: " << total << endl;
    return 0;
}
