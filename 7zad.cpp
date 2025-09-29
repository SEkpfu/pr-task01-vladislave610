#include <iostream>
using namespace std;

int main() {
    double h, r, total = 0;
    for (int i = 1; i <= 5; i++) {
        cout << "Работник " << i << ": ";
        cin >> h >> r;
        double s = h * r;
        cout << "Зарплата: " << s << endl;
        total += s;
    }
    cout << "Средняя зарплата бригады: " << total / 5 << endl;
    return 0;
}
