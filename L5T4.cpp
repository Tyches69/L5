#include <iostream>

using namespace std;

void showRoom(int room, int floor) {
    cout << "Класс: " << room << ", Этаж: " << floor << endl;
}

int main() {
    setlocale(LC_ALL, "");
    int room{}, floor{};
    cin >> room;
    cin >> floor;

    showRoom(room, 1);
    showRoom(room, floor);

    return 0;
}