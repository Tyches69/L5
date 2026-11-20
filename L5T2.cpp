#include <iostream>

using namespace std;

void addLesson(int& lessons) {
    lessons++;
}

int main() {
    setlocale(LC_ALL, "");
    int lessons{};
    cin >> lessons;

    addLesson(lessons);
    cout << "Количество занятий: " << lessons;

    return 0;
}