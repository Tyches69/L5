#include <iostream>

using namespace std;

int practiceTime(int minutesPerDay, int days) {
    return minutesPerDay * days;
}

int main() {
    setlocale(LC_ALL, "");
    int d{}, m{};
    cin >> d;
    cin >> m;

    if (d < 1 || m < 1) return 1;

    int total = practiceTime(m, d);
    cout << "Общее время занятий: " << total << " минут";

    return 0;
}
