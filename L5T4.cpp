#include <iostream>

using namespace std;

void showRoom(int room, int floor = 1) {
    cout << "Класс: " << room << ", Этаж: " << floor << endl;
}

int main() {
    setlocale(LC_ALL, "");
    int room{}, floor{};
    cin >> room;
    cin >> floor;

    if (room < 1 || floor < 1) return 1;

    showRoom(room);
    showRoom(room, floor);

    return 0;
}
