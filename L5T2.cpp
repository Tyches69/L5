#include <iostream>

using namespace std;

void addLesson(int& lessons) {
    lessons++;
}

int main() {
    setlocale(LC_ALL, "");
    int lessons{};
    cin >> lessons;

     if (lessons < 0) return 1;

    addLesson(lessons);
    cout << "Количество занятий: " << lessons;

    return 0;
}
