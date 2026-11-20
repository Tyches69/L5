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

    showRoom(room);
    showRoom(room, floor);

    return 0;
}
