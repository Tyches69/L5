#include <iostream>

using namespace std;

int notes(int a, int b) {
    return a + b;
}

int notes(int a, int b, int c) {
    return a + b + c;
}

int main() {
    setlocale(LC_ALL, "");
    int a{}, b{}, c{};
    cin >> a;
    cin >> b;
    cin >> c;

    if ( a < 1 || b < 1 || c < 1) return 1;

    cout << "Сумма двух: " << notes(a, b) << endl;
    cout << "Сумма трех: " << notes(a, b, c);

    return 0;
}
