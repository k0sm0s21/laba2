#include <iostream>
using namespace std;

int main() {

    setlocale(0, "");
    int numVisitors;
    cout << "Введите кол-во посетителей спортзала: ";
    cin >> numVisitors;

    if (numVisitors <= 0) {
        cout << "Введено некорректное кол-во посетителей." << endl;
        return 0;
    }

    int mostEl = 0;
    int mostYo = 1000;
    int totalAge = 0;

    for (int i = 0; i < numVisitors; i++) {
        int age;
        cout << "Введите возраст посетителя " << (i + 1) << ": ";
        cin >> age;

        if (age > mostEl) {
            mostEl = age;
        }
        if (age < mostYo) {
            mostYo = age;
        }
        totalAge += age;
    }

    double averageAge = static_cast<double>(totalAge) / numVisitors;

    cout << "Самый старший посетитель имеет возраст: " << mostEl << endl;
    cout << "Самый молодой посетитель имеет возраст: " << mostYo << endl;
    cout << "Средний возраст посетителей: " << averageAge << endl;

    return 0;
}