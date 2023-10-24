#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int finger;
    cout << "Введите порядковый номер пальца: ";
    cin >> finger;
    switch (finger) {
    case 1: {
        cout << "Большой палец";
        break;
    }
    case 2: {
        cout << "Указательный палец";
        break;
    }
    case 3: {
        cout << "Средний палец";
        break;
    }
    case 4: {
        cout << "Безымянный палец";
        break;
    }
    case 5: {
        cout << "Мизинец";
        break;
    }
    default: {
        cout << "Неверный номер пальца";
        break;
    }
    }

    return 0;
}
