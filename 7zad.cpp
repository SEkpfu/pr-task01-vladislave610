#include <iostream>
using namespace std;

int main() {
    double h, r, total = 0;
    for (int i = 1; i <= 5; i++) {
        cout << "�������� " << i << ": ";
        cin >> h >> r;
        double s = h * r;
        cout << "��������: " << s << endl;
        total += s;
    }
    cout << "������� �������� �������: " << total / 5 << endl;
    return 0;
}
